#include<iostream>
using namespace std;

class fact
{
    public:
    
    int facti(int);
};

int fact::facti(int no)
{
    if(no > 1)
    return (no * facti(no - 1));
    else
    return 1;
}

int main()
{
    fact f1;
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    cout<<f1.facti(n);
    return 0;
}