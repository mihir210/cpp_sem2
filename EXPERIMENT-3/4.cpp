/*
Write a program that calculates sum, subtraction of two complex numbers using the
concept of function returning object. Given functions should be declared as friendly
functions.

*/

#include <iostream>
using namespace std;

class complex
{
private:
    float real;
    float img;

public:
    void getdata();
    void putdata();
    friend complex sum(complex, complex);
    friend complex substract(complex, complex);
};

void complex ::getdata()
{
    cout << "Enter the real part :";
    cin >> real;

    cout << "Enter the img part :";
    cin >> img;
}

void complex ::putdata()
{
    cout << real << " + i" << img << endl;
}

complex sum(complex a, complex b)
{
    complex c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;

    return c;
}

complex substract(complex a, complex b)
{
    complex c;
    c.real = a.real - b.real;
    c.img = a.img - b.img;

    return c;
}

int main()
{
    complex c1, c2, c3, c4;

    c1.getdata();

    c2.getdata();

    cout << "details \n";
    c1.putdata();
    c2.putdata();

    c3 = sum(c1, c2);

    cout << "sum is  ";
    c3.putdata();

    c4 = substract(c1, c2);
    cout << "\n substraction is ";
    c4.putdata();

    return 0;
}
