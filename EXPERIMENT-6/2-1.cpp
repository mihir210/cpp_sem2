/*
Write a program which demonstrates the use of multi-level and multiple inheritance.
*/

#include <iostream>
#include <cstring>
#include<mysql.h>
using namespace std;

void println()
{
    cout<<endl;
    for (int i = 0; i < 90; i++)
    {
        cout<<"=";
    }
    cout<<endl;
    
}
class student
{
protected:
    int roll;

public:
    void getno(int a)
    {
        roll = a;
    }
    void putno();
};

void student::putno()
{
    cout << "Roll No  :" << roll << endl;
}

class test : public student
{
protected:
    int sub1;
    int sub2;

public:
    void get_marks(int a, int b)
    {
        sub1 = a;
        sub2 = b;
    }
    void put_marks();
};

void test::put_marks()
{
    cout << "Marks in Sub 1 :" << sub1 << "\nMarks in Sub 2 :" << sub2;
}

class result : public test
{
private:
    int total;

public:
    void display();
};

void result::display()
{
    total = sub1 + sub2;
    putno();
    put_marks();
    cout
        << "\nTotal = " << total;
}

int main()
{
    result *stu;
    int a, b, n;

    cout << "Enter the total number of student :";
    cin >> n;

    stu = new result[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the details of student "<<i+1<<endl;
        cout << "Enter the roll no of student :";
        cin >> a;
        stu[i].getno(a);

        cout << "Enter the marks of sub 1 and sub2 :";
        cin >> a >> b;
        stu[i].get_marks(a, b);
    }

    for (int i = 0; i < n; i++)
    {
        cout<<"Details of student "<<i+1<<endl;
        stu[i].display();
        println();
        
    }

    delete[] stu;
    

    return 0;
}
