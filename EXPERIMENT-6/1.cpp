/*
Define one student class containing university and degree data. Define one
employee class containing employee name and salary data. Now derive manager
class from above class which contains all 4 details. Inheritance type should be
private. All the classes have getdata() and showdata() functions to display the results.
*/

#include <iostream>
#include <string>
using namespace std;

class student
{
protected:
    string u_name;
    string deg;

public:
    void showdata();
    void getdata(string, string);
};

void student::getdata(string a, string b)
{
    u_name = a;
    deg = b;
}

void student::showdata()
{
    cout << "university name : " << u_name << endl;
    cout << "Degree name : " << deg << endl;
}

class employee
{
protected:
    string name;
    int salary;

public:
    void showdata();
    void getdata(string, int);
};

void employee::getdata(string a, int b)
{
    name = a;
    salary = b;
}

void employee::showdata()
{
    cout << "Name of Employee is : " << name << endl;
    cout << "Salary of employee is : " << salary << endl;
}

class manager : employee, student
{
public:
    void showdata();
    void getdata();
};

void manager::showdata()
{
    student::showdata();
    employee::showdata();
}

void manager::getdata()
{

    cout << "Enter the name of university of student : ";
    cin >> u_name;
    cout << "Enter the Name of the degree of student :";
    cin >> deg;

    cout << "Enter the name of employee :";
    cin >> name;

    cout << "Enter the salary of employee :";
    cin >> salary;
}

int main()
{
    manager a;

    a.getdata();

    a.showdata();

    return 0;
}
