#include <iostream>
#include <string>
using namespace std;

int main()
{
    char c;
    int n = 0, s = 0, h = 0;

    cin.get(c);

    while (c != '$')
    {
        if (c == '\n')
        {
            n++;
        }
        if (c == ' ' || c == '\n')
        {
            s++;
        }

        if (c == '\n' && c == ' ')
        {
            h++;
        }
        cin.get(c);
    }

    cout << n + 1 << endl
         << s + 1 << endl
         << h;
    return 0;
}
