/*
 Write a Program to display the reverse of a number using the concept of constructor.
 */

#include <iostream>
using namespace std;
class number
{
private:
    int n;

public:
    number(int a);
    number(){}
    void putdata();
};

number ::number(int a)
{
    int rem = 0;
    n = 0;
    while (a != 0)
    {
        rem = a % 10;
        n = n * 10 + rem;
        a /= 10;
    }
}

void number ::putdata()
{
    cout << "reverse of a number is :" << n << endl;
}
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    number r(n);

    r.putdata();
    return 0;
}