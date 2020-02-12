#include<iostream>
using namespace std;

class demo
{
    int a,b;
    
 
    public:
 
    
    demo()              // Default Constructor
    {
        a=0;
        b=0;
        cout<<"\n DC ";
    }
    
    demo(int x,int y)   // Parametrised Constructor
    {
        a=x;
        b=y;
        cout<<"\n PC ";
    }
    
    demo(const demo &d) // Copy Constructor
    {
        a=d.a;
        b=d.b;
        cout<<"\n CC ";
    }
    
    demo sum(demo m ,demo n) // Sum Function Of demo Type
    {
        demo o;
        o.a=m.a+n.a;
        o.b=m.b+n.b;
        cout<<"\n Demo Sum ";
        return o;
    }
    
    ~demo()             // Distructor
    {
        cout<<"\n D ";   
    }
};

int main()
{
    demo d1,d2;          // DC
    demo d3(12,23);      // PC
    demo d4=demo(33,56); // PC
    demo d5(d3);         // CC
    demo d6=d4;          // CC
    d2=d1.sum(d3,d4);    // Demo Sum
    return 0;
}
