#include <iostream> 
#include <vector> 
using namespace std;

int rbegin()                         // Example of vector::rbegin() function
{ 
    vector<int> v; 
    v.push_back(11); 
    v.push_back(12); 
    v.push_back(13); 
    v.push_back(14); 
    v.push_back(15); 
  
    // prints all the elements 
    cout << "\nThe vector elements in reverse order are: "; 
    for (auto it = v.rbegin(); it != v.rend(); it++) 
        cout << *it << " "; 
    return 0; 
} 
 
int rend()                            // Example of vector::rend() function
{ 
    vector<int> v; 
    v.push_back(11); 
    v.push_back(12); 
    v.push_back(13); 
    v.push_back(14); 
    v.push_back(15); 
  
    cout << "\nThe last element is: " << *v.rbegin(); 
  
    // prints all the elements 
    cout << "\nThe vector elements in reverse order are: "; 
    for (auto it = v.rbegin(); it != v.rend(); it++) 
        cout << *it << " "; 
    return 0; 
} 

int main()
{
    rbegin();
    rend();
    
    return 0;
}

/*

vector::rbegin() is a built-in function in C++ STL which returns a reverse 
iterator pointing to the last element in the container.
Syntax: vector_name.rbegin()

vector::rend() is a built-in function in C++ STL which returns a reverse 
iterator pointing to the theoretical element right before the first element in the array container.
Syntax: vector_name.rend()

Source: GeeksfoeGeeks (https://www.geeksforgeeks.org/vector-rbegin-and-rend-function-in-c-stl/)

*/