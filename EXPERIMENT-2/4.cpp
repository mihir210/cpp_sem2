/*
using the concept of function overloading find the parameter of triangle,square and ractangle
*/

#include <iostream>

using namespace std;

int para(int, int, int);
int para(int, int);
int para(int);

int para(int a, int b, int c)
{
    return (a + b + c);
}

int para(int a, int b)
{
    return (2 * (a + b));
}

int para(int a)
{
    return (4 * a);
}
int main()
{
    int n, a, b, c;

    do
    {
        cout << "1.triangle" << endl
             << "2.square" << endl
             << "3.rectangle" << endl
             << "0.exit" << endl;

        cin >> n;

        switch (n)
        {
        case 1:
        {
            cout << "Enter the parameter of triangle :" << endl;
            cin >> a >> b >> c;

            cout << "parameter is " << para(a, b, c) << endl;
        }
        break;
        case 2:
        {
            cout << "Enter the parameter of square :" << endl;
            cin >> a;

            cout << "parameter is " << para(a) << endl;
        }
        break;

        case 3:
        {
            cout << "Enter the parameter of ractangle :" << endl;
            cin >> a >> b;

            cout << "parameter is " << para(a, b) << endl;
        }

        default:
            break;
        }
    } while (n != 0);

    return 0;
}