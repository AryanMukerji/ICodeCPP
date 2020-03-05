#include<iostream> 
using namespace std; 
  
class Complex 
{ 
    private: 
    
    int real,imag; 
    
    public: 
    
    Complex()          // Default Constructor
    {
       this->real = 0;
       this->imag = 0; 
    }
    
    Complex(int r,int i)  // Parameterized Constructor 
    {
        this->real = r;   
        this->imag = i;
    } 
    
    Complex(const Complex &c2) // Copy Constructor
    {
        this->real = c2.real;
        this->imag = c2.imag;
    }
    
    void print()     // Print Function 
    { 
        cout << this->real << " + i " << this->imag << endl;
    }
    
    Complex operator +(Complex const &c)   // Operator Overloaded Function
    {
        Complex c1;
    
        c1.real = this->real + c.real;
        c1.imag = this->imag + c.imag; 
    
        return c1;
        
    } 

}; 

int main() 
{ 
    Complex *c1, *c2;
    c1 = new Complex(4,7);		
    c2 = new Complex(3,5);
    Complex c3(*c1);
    Complex c4(*c2);
    Complex c5 = *c1 + *c2; 
    c5.print(); 
    
    return 0; 
} 

// This program was written by Aryan Mukerji (SAP ID 500075964)
/* A good reference website http://www.cs.fsu.edu/~jestes/cop3330/notes/dma.html 
   for Dyanmic Memory Allocation In Classes */