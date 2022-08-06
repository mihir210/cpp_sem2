/*
Write a c++ program to read and display multiple values in a single I/O statement
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the three number " << endl;

    cin >> a >> b >> c;

    cout << "a=" << a << "\t"
         << "b=" << b << "\t"
         << "c=" << c << endl;

    return 0;
}
