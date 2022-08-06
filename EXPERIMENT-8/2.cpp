/*
write a program which reads a text from the keyboard and display the following information on the screen in two columans
a) number of lines
b) number of character
c) number of words

string should be left justified and number should be right justified in a suitable field width
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 0, line = 0, word = 0, c = 0;
    char str[200], ch;

    cout << "Enter the string (* for termination)" << endl;

    cin.get(ch);

    while (ch != '*')
    {
        str[i] = ch;
        i++;
        cin.get(ch);
    }
    str[i] = '\0';

    if (str[0] != '*')
    {
        word++;
        line++;
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            word++;
        }
        if (str[i] == '\n')
        {
            line++;
        }
        else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            c++;
        }
    }
    cout.setf(ios::left, ios::adjustfield);
    cout.width(25);
    cout << "number of line :";
    cout.setf(ios::right, ios::adjustfield);
    cout.width(30);
    cout << line << endl;

    cout.setf(ios::left, ios::adjustfield);
    cout.width(25);
    cout << "Number of word :";
    cout.setf(ios::right, ios::adjustfield);
    cout.width(30);
    cout << word << endl;

    cout.setf(ios::left, ios::adjustfield);
    cout.width(25);
    cout << "Number of character :";
    cout.setf(ios::right, ios::adjustfield);
    cout.width(30);
    cout << c << endl;

    return 0;
}
