#include<iostream>
using namespace std;

int main()
{

    int TestCase, TC=0;
    
    cout<<"\n Enter Program Iterations : ";
    cin>>TestCase;
  
    while(TC != TestCase)
    {
        cout<<"\n\n Program Iteration "<< TC + 1;
        int size=0, k=1, i=0, Count=0, arr[size];
        
        cout<<"\n Enter Array Size : "; cin>>size;
        
        cout<<"\n Enter Array Elements : \n";
        for(int j=0; j<size; j++)
        {
            cout<<" "; cin>>arr[j];   
        }
        
        cout<<"\n The Program Outcome is : ";
        while(k <= size)
        {
            if(k == arr[i])
            {
                Count++;
            }
            
            i++;
            
            if(i == size)
            {
                cout<<Count<<" "; 
                Count=0;
                k++;
                i=0;
            }
        }
    
        TC++;
    }
    
    return 0;
}