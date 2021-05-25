#include <iostream>
using namespace std;
class complex
{
private :
    int real,imag;
public :
    complex()
    {
        real = 0;
        imag = 0;
    }
    complex(int a, int b)
    {
        real = a;
        imag = b;
    }

    complex operator + (complex v)
    {
        complex temp;
        temp.real= real+v.real;
        temp.imag= imag+v.imag;
        return temp;
    }

    void print()
    {
        cout<< real << "+" << imag <<endl;

    }
};


int main()
{
    complex c1(4,5) ;
    complex c2(2,5) ;
    complex c3;
    c3 = c1+c2 ;// c1 is the caller object
    c3.print();
    //cout<<"the value of c3 is "<< c3 <<endl;
    return 0;
}
