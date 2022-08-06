/*
Create a class distance with a data meter and centimeter. WAP to add two distances
using the concept of copy constructor.
*/

#include <iostream>
using namespace std;
class Distance
{
private:
    int meter;
    int centimeter;

public:
    Distance() {}
    Distance(int a, int b)
    {
        meter = a;
        centimeter = b;
    }

    Distance(Distance &);
    void display()
    {
        cout << "Distance in meter :" << meter << "\n Distance in centimeter :" << centimeter << endl;
    }
};

Distance::Distance(Distance &a)
{
    int n;
    cout << "Enter the Distance in meter and centimeter of object 2:";
    cin >> meter >> centimeter;
    centimeter = a.centimeter + centimeter;

    if (centimeter > 100)
    {
        meter = centimeter / 100;
        centimeter = centimeter % 100;
    }

    meter = meter + a.meter;
}

int main()
{
    Distance d1, d2;
    int a, b;

    cout << "Enter the Distance in meter and centimeter of object 1:";
    cin >> a >> b;

    d1 = Distance(a, b);

    d2 = Distance(d1);

    d2.display();

    return 0;
}
