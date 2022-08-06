/*
by overloading the print() function display variable of different data types
*/

#include <iostream>

using namespace std;

void print(int, int);
void print(double, int);
void print(int, double);
void print(double, double);

void print(int x, int y)
{
    cout << "a =" << x << endl
         << "b =" << y << endl;
}

void print(double x, int y)
{
    cout << "a =" << x << endl
         << "b =" << y << endl;
}

void print(int x, double y)
{
    cout << "a =" << x << endl
         << "b =" << y << endl;
}

void print(double x, double y)
{
    cout << "a =" << x << endl
         << "b =" << y << endl;
}
int main()
{
    double a, b;

    cout << "enter the value of a and b :";
    cin >> a >> b;
    print(a, b);
    return 0;
}
