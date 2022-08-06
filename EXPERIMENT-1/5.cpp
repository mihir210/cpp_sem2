/*

Write a program to print the maximunm value out of three
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int a, b, c;

    cout << "enter the value of a,b and c :" << endl;

    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "greater value is " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "greater value is " << b << endl;
    }
    else
    {
        cout << "greater value is " << c << endl;
    }

    return 0;
}
