#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, ans = 0, ct = 0;

    cout << "Enter the value of a and b :" << endl;
    cin >> a >> b;

    while (a)
    {
        if (a % 2 == 1)
        {
            ans = ans + b << ct;
        }
        ct++;
        a /= 2;
    }

    cout << "multiplication is :" << ans << endl;

    return 0;
}
