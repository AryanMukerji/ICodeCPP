#include <iostream> 
#include <vector> 
using namespace std; 

// Implementation of size() function 
int s1() 
{ 
    vector<int> myvector{ 1, 2, 3, 4, 5 }; 
    
    cout << " " << myvector.size() << endl; 
    
    return 0; 
}

int s2() 
{ 
    int sum = 0;
    
    vector<int> myvector{ 1, 5, 6, 3, 9, 2 }; 
    
    while ( myvector.size() > 0 ) 
    { 
        sum = sum + myvector.back(); 
        myvector.pop_back(); 
    } 
    
    cout << " " << sum << endl; 
    
    return 0; 
}

int main()
{
    s1();
    s2();
    
    return 0;
}

/*

vector::size() - size() function is used to return the size of the vector container 
                 or the number of elements in the vector container.

Syntax : vectorname.empty()

Parameters : No parameters are passed.

Returns : Number of elements in the container.

Examples :-

Input  : myvector = 1, 2, 3, 4, 5
         myvector.size();
Output : 5

Input  : myvector = {}
         myvector.size();
Output : 0

Source : GeekforGeeks (https://www.geeksforgeeks.org/vectorempty-vectorsize-c-stl/)

*/