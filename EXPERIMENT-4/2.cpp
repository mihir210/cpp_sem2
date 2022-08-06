/*
Using the concept of constructor overloading, find the area of Circle, rectangle,
triangle.
*/

#include <iostream>
#include <cstring>
#include <cmath>
#define PI 3.14285
using namespace std;

class area
{
private:
    float n;

public:
    area(double);
    area(double, double);
    area(double, double, double);
    void putdata();
    area();
};

area::area(double a) // area of circle
{
    n = PI * a * a;
}

area::area(double a, double b) // area of rectangle
{
    n = a * b;
}

area ::area(double a, double b, double c) // area of triangle
{
    float s = (a + b + c) / 2;

    n = sqrt(s * (s - a) * (s - b) * (s - c));
}

void area ::putdata()
{
    cout << "area is : " << n << endl
         << endl;
}
area ::area()
{
}


int main()
{
    double a, b, c;
    int k;
    do
    {
        cout << "1. area of circle \n 2. area of rectangle \n 3. area of triangle \n 0. exit\n";
        cin >> k;

        switch (k)
        {
        case 1:
        {
            cout << "Enter the radius :";
            cin >> a;
            area cir(a);
            cir.putdata();
            break;
        }

        case 2:
        {
            cout << "Enter the length and width :";
            cin >> a >> b;
            area rec(a, b);
            rec.putdata();
            break;
        }
        case 3:
        {
            cout << "Enter the three side of triangle :";
            cin >> a >> b >> c;
            area tri(a, b, c);
            tri.putdata();
            break;
        }
        default:
            break;
        }
    } while (k != 0);

    return 0;
}
