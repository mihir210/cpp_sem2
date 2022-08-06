/*
write a program to check if the year entered by the user is a leap year or not
*/

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the year :" << endl;
    cin >> n;

    if (n % 400 == 0)
    {
        cout << "this is a leap year :";
    }
    else if (n % 100 == 0)
    {
        cout << "this is a  not leap year :";
    }
    else if (n % 4 == 0)
    {
        cout << "this is a leap year :";
    }
    else
    {
        cout << "this is a not leap year :";
    }

    return 0;
}
