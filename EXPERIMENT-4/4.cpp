/*
Write a program which demonstrates the use of constructor-destructors.
*/

#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char *s;
    int length;

public:
    String()
    {
        length = 0;
        s = new char[length + 1];
    }
    ~String()
    {
        cout << "\nDistructor called.\n";
    }
    String(char *str);
    void getdata();
    void putdata();
};

String::String(char *str)
{
    length = strlen(str);

    s = new char[length + 1];
    strcpy(s, str);
}

void String::getdata()
{
    cout << "Enter the string :";
    cin >> s;
}

void String::putdata()
{
    cout << s << endl;
}

int main()
{
    char *ptr = "Abhay";
    String s1("Mihir"), s2(ptr), s3;

    s3.getdata();

    s1.putdata();
    s2.putdata();
    s3.putdata();
    return 0;
}
