#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int a, b, ct;
    float ans;

    cout << "enter the value of a and b :" << endl;
    cin >> a >> b;

    while (a)
    {
        if (a % 2 == 1)
        {
            ans = ans - float(b >> ct);
        }

        ct++;
        a /= 2;
    }

    cout << ans << endl;

    return 0;
}
