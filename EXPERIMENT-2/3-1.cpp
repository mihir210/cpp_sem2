/*
inline function
finding a factorial of given integer
*/

#include <iostream>

using namespace std;
inline int fac(int);

inline int fac(int a)
{
    if (a >= 1)
        return (a * fac(a - 1));
    else
        return 1;
}
int main()
{
    int n;

    cout << "Enter the number :" << endl;
    cin >> n;

    cout << "factorial is " << fac(n);

    return 0;
}