/*
Write a program to swap two number without using a third variable
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter the a and b :" << endl;
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a =" << a << endl
         << "b =" << b << endl;

    return 0;
}
