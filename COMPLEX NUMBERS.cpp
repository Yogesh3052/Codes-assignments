#include <iostream>
using namespace std;

class Complex
{
    int real,img;
    public:
        Complex() // Default Constructor 
        {
            img = real = 0;
        }

    Complex operator +(Complex &C) // Operator + overload
    {
        Complex temp;
        temp.real = real + C.real;
        temp.img = img + C.img;
        return temp;
    }

    Complex operator *(Complex &C)
    {
        Complex temp;
        temp.real =  (real * C.real) - (img * C.img);
        temp.img = (real * C.img) + (img * C.real);
        return temp;
    }

    friend void operator >>(istream &I, Complex &C)
    {
        I >> C.real >> C.img;
    }

    friend void operator <<(ostream &O, Complex &C)
    {
        O << C.real << " + " << C.img << "i" << endl;
    }
};


int main()
{
    Complex c1,c2,c3,c4;
    cout << "Enter Real and Img Part : ";
    cin >> c1;
    
    cout << "Enter Real and Img Part : ";
    cin >> c2;

    c3 = c1 + c2; 
    cout << "Addition : " << c3;

    c4 = c1 * c2;
    cout << "Multiplication : " << c4;

    return 0;
}