/*
Write a program to read a list containing item name item code and cost interactively and produce a three column output as shown below
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, code[10], i;
    float cost[10];
    string name[10];

    cout << "Enter the number :" << endl;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter the name :" << endl;
        cin >> name[i];

        cout << "Enter the code :" << endl;
        cin >> code[i];

        cout << "Enter the cost :" << endl;
        cin >> cost[i];
    }

    cout.setf(ios::left, ios::adjustfield);
    cout.width(20);
    cout << "NAME";

    cout.setf(ios::right, ios::adjustfield);
    cout.width(20);
    cout << "Code";

    cout.width(20);
    cout << "Cost" << endl
         << endl;

    for (i = 0; i < n; i++)
    {
        cout.setf(ios::left, ios::adjustfield);
        cout.width(20);
        cout << name[i];

        cout.setf(ios::right, ios::adjustfield);
        cout.width(20);
        cout << code[i];

        cout.setf(ios::right, ios::adjustfield);
        cout.setf(ios::fixed, ios::floatfield);
        cout.setf(ios::showpoint);
        cout.precision(3);
        cout.width(20);
        cout << cost[i] << endl;
    }

    return 0;
}
