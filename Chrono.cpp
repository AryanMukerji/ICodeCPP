#include <iostream>  
#include <chrono>
#include <ctime>

using namespace std;
using namespace std::chrono;

// A function illustrate the utility function duration::count 
int count() 
{ 
    // std::chrono::milliseconds is an instantiation of std::chrono::duration:- 1 second 
    milliseconds mil( 1000 );  
      
    mil = mil*60; 
      
    cout << " Duration (in periods) : " << mil.count() << " milliseconds ";
    cout << endl;
      
    cout << " Duration (in seconds) : " << ( mil.count() * milliseconds::period::num / milliseconds::period::den ) << " seconds ";
    cout << endl;
  
    return 0; 
} 

// Function to calculate Fibonacci series 
long fibonacci( unsigned n ) 
{ 
    if ( n < 2 ) return n; 
    return fibonacci( n-1 ) + fibonacci( n-2 ); 
} 

// A function to illustrate time point and system clock functions  
int TimePoint() 
{ 
    // Using time point and system_clock 
    std::chrono::time_point<std::chrono::system_clock> start, end; 
  
    start = std::chrono::system_clock::now(); 
    
    cout << " f(42) = " << fibonacci( 42 ) << endl; 
    
    end = std::chrono::system_clock::now(); 
  
    std::chrono::duration<double> elapsed_seconds = end - start; 
    
    std::time_t end_time = std::chrono::system_clock::to_time_t( end ); 
  
    cout << " Finished computation at " << std::ctime( &end_time ) << " Elapsed time : " << elapsed_seconds.count() << " s "; 
    cout << endl;
} 

int main()
{
    count();
    TimePoint();
    
    return 0;
}

/*

                                                                Chrono In C++
                                                                          
=> Chrono library is used to deal with date and time. This library was designed to deal with the fact that timers and clocks might be different on 
   different systems and thus to improve over time in terms of precision. The unique thing about chrono is that it provides a precision-neutral 
   concept by separating duration and point of time (“timepoint”) from specific clocks.  

=> Chrono is the name of a header and also of a sub-namespace: All the elements in this header (except for the common_type specializations) are not 
   defined directly under the std namespace (like most of the standard library) but under the std::chrono namespace.

=> The elements in this header deal with time. This is done mainly by means of three concepts :- 

   (1) Duration :-
   { 
     A duration object expresses a time span by means of a count like a minute, two hours, or ten milliseconds. For example, “42 seconds” could be 
     represented by a duration consisting of 42 ticks of a 1-second time unit.
    
     // A function illustrate the utility function duration::count => int count() [ABOVE]
   }
   
   (2) Clock :- 
   { 
     A clock consists of a starting point (or epoch) and a tick rate. For example, a clock may have an epoch of February 22, 1996 and tick every second. 
     C++ defines three clock types:
    
     (.) system_clock-It is the current time according to the system (regular clock which we see on the toolbar of the computer). 
       It is written as- std::chrono::system_clock
       
     (.) steady_clock-It is a monotonic clock that will never be adjusted.It goes at a uniform rate. It is written as- std::chrono::steady_clock
    
     (.) high_resolution_clock– It provides the smallest possible tick period. It is written as-std::chrono::high_resolution_clock
   }
   
   (3) Time point :- 
   {
     A time_point object expresses a point in time relative to a clock’s epoch. Internally, the object stores an object of a duration type, 
     and uses the Clock type as a reference for its epoch.
     
     // A function to illustrate time point and system clock functions => int TimePoint() [ABOVE]
   }
   
Source : GeeksforGeeks (https://www.geeksforgeeks.org/chrono-in-c/)   
  
*/