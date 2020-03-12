// C++ program to demonstrate 
// example of clock() function. 
  
#include<iostream>
#include<ctime> 
#include<cmath>
using namespace std; 
  
int main () 
{ 
    float a; 
    clock_t time_req; 
  
    // Without using pow function 
    time_req = clock(); 
    for(int i=0; i<200000; i++) 
    { 
        a = log(i*i*i*i); 
    } 
    time_req = clock() - time_req; 
    cout << "Processor time taken for multiplication: "
        << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl; 
  
    // Using pow function 
    time_req = clock(); 
    for(int i=0; i<200000; i++) 
    { 
        a = log(pow(i, 4)); 
    } 
    time_req = clock() - time_req; 
    cout << "Processor time taken in pow function: "
        << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl; 
  
    return 0; 
} 

/*
The clock() function is defined in the ctime header file.
The clock() function returns the approximate processor time that is consumed by the program.
The clock() time depends upon how the operating system allocate resources to 
the process that’s why clock() time may be slower or faster than the actual clock.

Syntax: clock_t clock( void );

Parameters: This function does not accept any parameter.

Return Value: This function returns the approximate processor time that is consumed by 
the program and on failure function returns -1.
*/