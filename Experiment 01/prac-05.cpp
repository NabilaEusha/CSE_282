/* Write a C++ program to subtract two complex numbers. */

#include<iostream>
using namespace std;
 
struct subtract
{
    float real, imag;
};
 
int main(){
    subtract c1, c2, sub;
    cout<<"Enter the 1st real and imaginary parts respectively: "<<endl;
    cin >> c1.real;
    cin >> c1.imag;

    cout<<"Enter the 2nd real and imaginary parts respectively: "<<endl;
    cin >> c2.real;
    cin >> c2.imag;

    sub.real = c1.real-c2.real;
    sub.imag = c1.imag-c2.imag;

    if (sub.imag<0)
    {
        cout<<"Subtraction of two complex number is : "<<sub.real<<sub.imag<<"i"<<endl;
    }
    else{
        cout<<"Subtraction of two complex number is : "<<sub.real<<"+"<<sub.imag<<"i"<<endl;
    }
    


return 0;
}
