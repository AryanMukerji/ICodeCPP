#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <limits>
using namespace std;

// Checking the matrix after each user input to determine the progression of the game
int ProgressCheck(char arr[]) 
{
    if (arr[0] == 'X' && arr[1] == 'X' && arr[2] == 'X' ||
        arr[0] == 'O' && arr[1] == 'O' && arr[2] == 'O')        // Row 1 WIN
    {
        return 1;
    }
    
    else if (arr[3] == 'X' && arr[4] == 'X' && arr[5] == 'X' ||
             arr[3] == 'O' && arr[4] == 'O' && arr[5] == 'O')   // Row 2 WIN
    {
        return 1;
    }
    
    else if (arr[6] == 'X' && arr[7] == 'X' && arr[8] == 'X' ||
             arr[6] == 'O' && arr[7] == 'O' && arr[8] == 'O')   // Row 3 WIN
    {
        return 1;
    }
    
    else if (arr[0] == 'X' && arr[3] == 'X' && arr[6] == 'X' ||
             arr[0] == 'O' && arr[3] == 'O' && arr[6] == 'O')   // Coloum 1 WIN
    {
        return 1;
    }
    
    else if (arr[1] == 'X' && arr[4] == 'X' && arr[7] == 'X' ||
             arr[1] == 'O' && arr[4] == 'O' && arr[7] == 'O')   // Coloum 2 WIN
    {
        return 1;
    }

    else if (arr[2] == 'X' && arr[5] == 'X' && arr[8] == 'X' ||
             arr[2] == 'O' && arr[5] == 'O' && arr[8] == 'O')   // Coloum 3 WIN
    {
        return 1;
    }
   
    else if (arr[0] == 'X' && arr[4] == 'X' && arr[8] == 'X' ||
             arr[0] == 'O' && arr[4] == 'O' && arr[8] == 'O')   // Diagonal 1 WIN
    {
        return 1;
    }
   
    else if (arr[2] == 'X' && arr[4] == 'X' && arr[6] == 'X' ||
             arr[2] == 'O' && arr[4] == 'O' && arr[6] == 'O')   // Diagonal 2 WIN
    {
        return 1;
    }
  
    else if (arr[0] != ' ' && arr[1] != ' ' && arr[2] != ' ' && 
             arr[3] != ' ' && arr[4] != ' ' && arr[5] != ' ' && 
             arr[6] != ' ' && arr[7] != ' ' && arr[8] != ' ')    // It's A TIE
    {
        return 0;
    }
        
    else
    {
        return -1;  // Game In Progress
    }
}

// compiling the result given by ProgressCheck() when called in TicTacToe()
int CheckWinner(int p, int w) 
{
    if (p == 1)
    {
        if (w == 1)
        {
            cout << "\n\n Player 1 Wins!! ";
            return 1;
        }
        
        else
        {
            cout << "\n\n Player 2 Wins!! ";
            return 1;
        }
    }
    
    else if (p == 0)
    {
        cout << "\n\n Oh! It's A TIE! ";
        return 1;
    }
    
    else
    {
        return 0;
    }
}

int TicTacToe(char p1, char p2)
{
    char arr1[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}; // A blank array
    
    int a1, a2, flag = 0; // a1 and a2 stores the box number (displayed on screen) selected by user
    
    cout << "\n\t\t  _____ _____ _____  "
         << "\n\t\t |     |     |     | "
         << "\n\t\t |  " << arr1[0] << "  |  " << arr1[1] << "  |  " << arr1[2] << "  | "
         << "\n\t\t |____1|____2|____3| "
         << "\n\t\t |     |     |     | "
         << "\n\t\t |  " << arr1[3] << "  |  " << arr1[4] << "  |  " << arr1[5] << "  | "
         << "\n\t\t |____4|____5|____6| "
         << "\n\t\t |     |     |     | "
         << "\n\t\t |  " << arr1[6] << "  |  " << arr1[7] << "  |  " << arr1[8] << "  | "
         << "\n\t\t |____7|____8|____9| ";
    
    while(true)
    {
        PLAYER1:
        
        a1 = 0;
        cout << "\n\n\n Enter Player 1 : " << p1 << " : "; cin >> a1; 
        
        if (!(1 <= a1 && a1 <= 9))
        {
            cout << "\n Invalid Input! ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            goto PLAYER1;
        }
        
        // checking if a certain position in the matrix is occupied or not
        if (arr1[a1-1] == p1 || arr1[a1-1] == p2) 
        {
            cout << "\n Position Taken! ";
            goto PLAYER1;
        }
	    
	    // Assigning 'X' or 'O' at a1-1 postion in matrix
	    arr1[a1-1] = p1; 
        
	    system("clear");
        
        cout << "\n\t\t  _____ _____ _____  "
             << "\n\t\t |     |     |     | "
             << "\n\t\t |  " << arr1[0] << "  |  " << arr1[1] << "  |  " << arr1[2] << "  | "
             << "\n\t\t |____1|____2|____3| "
             << "\n\t\t |     |     |     | "
             << "\n\t\t |  " << arr1[3] << "  |  " << arr1[4] << "  |  " << arr1[5] << "  | "
             << "\n\t\t |____4|____5|____6| "
             << "\n\t\t |     |     |     | "
             << "\n\t\t |  " << arr1[6] << "  |  " << arr1[7] << "  |  " << arr1[8] << "  | "
             << "\n\t\t |____7|____8|____9| ";
        
        // calling CheckWinner() to check the progress of the game
        flag = CheckWinner(ProgressCheck(arr1), 1); // 1 reperesents Player 1
        
        if (flag == 1) // To break the loop after a game ends
        {
            break;
        }
        
        PLAYER2:
        
        a2 = 0;
        cout << "\n\n\n Enter Player 2 : " << p2 << " : "; cin >> a2;
        
        if (!(1 <= a2 && a2 <= 9))
        {
            cout << "\n Invalid Input! ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            goto PLAYER2;
        }
        
        if (arr1[a2-1] == p1 || arr1[a2-1] == p2)
        {
            cout << "\n Position Taken! ";
            goto PLAYER2;
        }
	
	    arr1[a2-1] = p2;
        
	    system("clear");
	    
	    cout << "\n\t\t  _____ _____ _____  "
             << "\n\t\t |     |     |     | "
             << "\n\t\t |  " << arr1[0] << "  |  " << arr1[1] << "  |  " << arr1[2] << "  | "
             << "\n\t\t |____1|____2|____3| "
             << "\n\t\t |     |     |     | "
             << "\n\t\t |  " << arr1[3] << "  |  " << arr1[4] << "  |  " << arr1[5] << "  | "
             << "\n\t\t |____4|____5|____6| "
             << "\n\t\t |     |     |     | "
             << "\n\t\t |  " << arr1[6] << "  |  " << arr1[7] << "  |  " << arr1[8] << "  | "
             << "\n\t\t |____7|____8|____9| ";
        
        flag = CheckWinner(ProgressCheck(arr1), 2); // 2 reperesents Player 2
        
        if (flag == 1)
        {
            break;
        }
    }
    
    return 0;
}

int StartGame()
{
    SELECT:
    
    // p1 & p2 is stores the respective symbols for Player 1 & Player 2
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
    
    CHANGE:
    
    // If there is a change in mind of Players
    cout << "\n\n Want to change symbols, enter Y or N : "; cin >> a;
    
    if (a == 'Y' || a == 'y')
    {
       goto SELECT; 
    }
    
    else if (a == 'N' || a == 'n')
    {
        system("clear");
        
        cout << "\n\n The Game Begins........... NOW!! \n\n";
        TicTacToe(p1, p2);
    }
    
    else 
    {
        cout << "\n Invalid Input! ";
        goto CHANGE;
    }
    
    return 0;
}

int main()
{
    START:
    
    int n;
    
    // The program starts & ends from here
    cout << "\n\n Tic-Tac-Toe : The Game "
         << "\n 1. Start The Game \n 2. End The Game "
         << "\n Choose options: "; cin >> n;
    
    switch (n)
    {
        case 1:
        {
            system("clear");
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