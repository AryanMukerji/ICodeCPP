// C++ program to demonstrate floor function 
#include <iostream> 
#include <cmath> 
using namespace std; 
  
int floor()
{
	// using floor function which return 
    // floor of input value 
    cout << " Floor is : " << floor(2.3) << endl; 
    cout << " Floor is : " << floor(-2.3) << endl; 
  
    return 0;
}
 
int ceil() 
{ 
    // using ceil function which return 
    // floor of input value 
    cout << " Ceil is : " << ceil(2.3) << endl; 
    cout << " Ceil is : " << ceil(-2.3) << endl; 
  
    return 0; 
} 
 
// Driver function 
int main() 
{ 
    floor();
	ceil();
	
	return 0;
}