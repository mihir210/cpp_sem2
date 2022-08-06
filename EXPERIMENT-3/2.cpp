/*
Define a class Employee with data employee name, city, basic salary, dearness
allowance (DA) and house rent (HRA).
a. Define getdata (), calculate (), and display () functions.
b. Calculate() function should find the total salary and display() function should
display it.
Hint: Total = basic + basic * da / 100 + basic * hra / 100;

*/

#include <iostream>
using namespace std;

class employee
{
private:
    char name[20];
    char city[20];
    int salery;
    float da;
    float hra;
    float total;

public:
    void getdata(void);
    void display(void);
    void calculate();
};

void employee::getdata()
{
    cout << "Enter the name :";
    cin >> name;

    cout << "Enter the city name :";
    cin >> city;

    cout << "Enter the basic salery :";
    cin >> salery;

    cout << "Enter the dearness allowance in % ";
    cin >> da;

    cout << "Enter the house rant in %";
    cin >> hra;
}

void employee::display()
{
    cout << name << "\t" << city << "\t" << salery << "\t" << da << "\t" << hra << "\t" << total << endl;
}
void employee ::calculate()
{
    total = salery + (salery * da / 100) + (salery * hra / 100);
}
int main()
{
    employee emp[20];
    int n, i;

    cout << "Enter the number of employee :";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << endl
             << "Enter the details of employee " << i + 1 << endl;

        emp[i].getdata();

        emp[i].calculate();
    }

    cout << "Display is :" << endl;

    cout << "name\tcity\tsalery\tDA\tHRA\tTotal" << endl;
    for (i = 0; i < n; i++)
    {
        emp[i].display();
    }

    return 0;
}
