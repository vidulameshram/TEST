/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class Complex{
    
    private:
        int real,imag;
    public:
        Complex(){
            real =0;
            imag =0;
        }
        Complex(int r,int i){
            real =r;
            imag =i;
        }   
        void print() {
            cout<< real << " + "<< imag <<"i" << endl;
        }
    
        Complex operator +(Complex c) {
            Complex temp;
            temp.real = real+c.real;
            temp.imag = imag+c.imag;
            return temp;
        }
        
        Complex operator -(Complex c){
            Complex temp;
            temp.real = real-c.real;
            temp.imag = imag-c.imag;
            return temp;
        }
    };


int main()
{
    
    Complex c1(10,3);
    Complex c2(15,5);
    Complex c3;
    Complex c4;
    c3 = c1+c2; // c3=c1.add(c2)
    c3.print();
    c4 = c1-c2;
    c4.print();
    return 0;
}
