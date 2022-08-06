/*
Write a user defined function to convert lower case to upper case and upper case to lower case
*/

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

void convert(char s[])
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
        else
        {
            s[i] -= 32;
        }
    }
}

int main()
{
    char str[400];

    cout << "Enter the string :" << endl;
    cin >> str;

    convert(str);

    cout << str << endl;
    return 0;
}
