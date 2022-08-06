/*
exchange the value of two variable using call by value and call by reference
*/

#include <iostream>

using namespace std;

void swapbyreference(int &, int &);
void swapbyvalue(int, int);
void swapbyreference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapbyvalue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a, b;

    cout << "Enter the value of a";
    cin >> a >> b;

    swapbyvalue(a, b);
    cout << " call by value a =" << a << " b= " << b << endl;

    swapbyreference(a, b);
    cout << "call by reference a =" << a << " b= " << b << endl;

    return 0;
}
