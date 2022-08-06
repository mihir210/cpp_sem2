//#include <iostream>
//#include <cstring>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0, b = 1, sum, n=1000, x, y;

    cout << "enter the starting and ending limit" << endl;
    cin >> x >> y;

    if (x == 0)
    {
        cout << a << "\t" << b << "\t";
    }

    while (n > 0)
    {
        sum = a + b;
        if (sum > x && sum < y)
        {
            cout << sum << "\t";
        }

        a = b;
        b = sum;
        n--;
    }

    return 0;
}
