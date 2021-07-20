#include <iostream>
#include <unistd.h>
#include <cstdlib>
using namespace std;

int main()
{
    int H = 0, M = 0, S = 0; // H = Hours, M = Minutes, S = Seconds
    
    while (true)
    {
        system("clear");
        
        cout<<"\n\t\t\t\t"<< H <<" : "<< M <<" : "<< S <<"\n";
        sleep(1);
        
        S++;
        
        if (S == 60)
        {
            M++;
            S = 0;
            
            if (M == 60)
            {
                H++;
                M = 0;
                
                if (H == 24)
                {
                    H = 0;
                }
            }
        }
    }

    return 0;
}