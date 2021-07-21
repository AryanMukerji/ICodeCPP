#include <iostream>
using namespace std;

int TicTacToe(char p1, char p2)
{
    char arr1[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
    char arr2[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
    
    int a1, a2, count1, count2, flag = 0;
    
    while(true)
    {
        PLAYER1:
        
        cout << "\n\t " << arr1[0] << " " << arr1[1] << " " << arr1[2]
             << "\n\t " << arr1[3] << " " << arr1[4] << " " << arr1[5]
             << "\n\t " << arr1[6] << " " << arr1[7] << " " << arr1[8];
        
        a1 = 0;
        cout << "\n\n Enter Player 1 : " << p1 << " : "; cin >> a1;
        
        count1 = 0;
        for (int i = 0; i < 9; i++)
        {
            if (arr1[i] == arr2[a1]) 
            {
                arr1[i] = p1;
                break;
            }
            
            count1++;
        }
        
        if (count1 == 9)
        {
            cout << "\n Position Taken! ";
            goto PLAYER1;
        }
        
        cout << "\n\t " << arr1[0] << " " << arr1[1] << " " << arr1[2]
             << "\n\t " << arr1[3] << " " << arr1[4] << " " << arr1[5]
             << "\n\t " << arr1[6] << " " << arr1[7] << " " << arr1[8];
        
        flag++;
        
        if (flag == 9)
        {
            break;
        }
        
        PLAYER2:
        
        a2 = 0;
        cout << "\n\n Enter Player 2 : " << p2 << " : "; cin >> a2;
        
        count2 = 0;
        for (int j = 0; j < 9; j++)
        {
            if (arr1[j] == arr2[a2])
            {
                arr1[j] = p2;
                break;
            }
            
            count2++;
        }
        
        if (count2 == 9)
        {
            cout << "\n Position Taken! ";
            goto PLAYER2;
        }
        
        flag++;
    }
    
    return 0;
}

int StartGame()
{
    SELECT:
    
    char p1, p2, a;
    
    cout << "\n Select The Symbol 'X' or 'O' ";
    
    cout << "\n Player 1 : "; cin >> p1;
    
    if (p1 == 'X' || p1 == 'x')
    {
        p1 = 'X';
        p2 = 'O';
        
        cout << " Player 2 : " << p2;
    }
    
    else if (p1 == 'O' || p1 == 'o')
    {
        p1 = 'O';
        p2 = 'X';
        
        cout << " Player 2 : " << p2;
    }
    
    else
    {
        cout << "\n Enter Valid Symbols (X or O) \n";
        goto SELECT;
    }
    
    cout << "\n\n Want to change symbols, enter Y or N : "; cin >> a;
    
    if (a == 'Y' || a == 'y')
    {
       goto SELECT; 
    }
    
    else
    {
        TicTacToe(p1, p2);
    }
    
    return 0;
}

int main()
{
    START:
    
    int n;
    
    cout << "\n\n Tic-Tac-Toe : The Game "
         << "\n 1. Start The Game \n 2. End The Game "
         << "\n Choose options: "; cin >> n;
    
    switch (n)
    {
        case 1:
        {
            StartGame();
            goto START;
        }
        break;
        
        case 2:
        {
            cout << "\n Good Bye!! See you soon........ ";
            exit(0);
        }
        break;
        
        default:
        {
            cout << "\n Wrong Option! \n";
            goto START;
        }
    }
    
    return 0;
}