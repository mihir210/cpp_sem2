/*
Write a c++ program to perform division operation and print quotient and reminder based on user input
*/

#include <iostream>
using namespace std;

int main()
{
    int n, a, b, r;

    cout << "Enter the numerator :" << endl;
    cin >> a;

    cout << "Enter the denominator :" << endl;
    cin >> b;

    n = a / b;

    r = a % b;

    cout << "quotient = " << n << endl
         << "Reminder =" << r << endl;

    return 0;
}
