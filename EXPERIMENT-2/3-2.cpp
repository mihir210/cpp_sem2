/*
inline function
finding cube of given number
*/

#include <iostream>
using namespace std;

inline int cube(int);

inline int cube(int a)
{
    return (a * a * a);
}

int main()
{
    int n;

    cout << "Enter the number :" << endl;
    cin >> n;

    cout << "Cube is " << cube(n);
    return 0;
}