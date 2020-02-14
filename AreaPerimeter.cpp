#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.14
#define area 314 

class shape
{
    float l=2,b,h=4,r,cb,s;
    float pr,ps,pt,pc;
    public:
    void rect();
    void sqr();
    void tri();
    void cir();
    float rpr(){return pr;}
    float rps(){return ps;}
    float rpt(){return pt;}
    float rpc(){return pc;}
};

void shape::rect()
{
    b=area/l;
    pr=2*(l+b);
}

void shape::sqr()
{
    s=sqrt(area);
    ps=4*s;
}

void shape::tri()
{
    cb=(area*2)/h;
    pt=h+cb+sqrt((h*h)+(cb*cb));
}

void shape::cir()
{
    r=sqrt(area/PI);
    pc=2*PI*r;
}

int main()
{
    shape s1;
    int n=s1.rpr();
    if(n<s1.rps()) n=s1.rps();
    if(n<s1.rpt()) n=s1.rpt(); 
    if(n<s1.rpc()) n=s1.rpc();
    
    cout<<n;
    return 0;
}