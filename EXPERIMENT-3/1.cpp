/*
create a class named student with data as roll no, name, cpi, etc.
a. Create functions to display the relevant data of student class.
b. Also write a function that can change/alter data of student class.
*/

#include <iostream>
using namespace std;

class student
{
private:
    int roll_no;
    char name[20];
    float cpi;

public:
    void getdata(void);
    void putdata(void);
    void update(void);
    int data(int);
};

void student::getdata()
{
    cout << "Enter the roll no :";
    cin >> roll_no;

    cout << "Enter the name :";
    cin >> name;

    cout << "Enter the cpi :";
    cin >> cpi;
}

void student::putdata()
{
    cout << "roll no of student is :" << roll_no << endl;
    cout << "Name of the student is :" << name << endl;
    cout << "Cpi of the student is :" << cpi << endl;
}

void student ::update()
{
    int temp;

    cout << "1.name \n 2.cpi \n 3.roll no \n ";
    cin >> temp;

    switch (temp)
    {
    case 1:
        cout << "Enter the name :";
        cin >> name;
        break;

    case 2:
        cout << "Enter the cpi :";
        cin >> cpi;
        break;

    case 3:
        cout << "Enter the roll no :";
        cin >> roll_no;
        break;

    default:
        break;
    }
}

int student ::data(int r)
{
    if (roll_no == r)
        return 1;
    else
        return 0;
}

int main()
{
    student stu[20];
    int i, n, roll, up;

    cout << "Enter the number of student :";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << endl
             << "Enter the details of student " << i + 1 << endl;
        stu[i].getdata();
    }
    cout << "\n\n";

    for (i = 0; i < n; i++)
    {
        cout << endl
             << "details of student " << i + 1 << endl;
        stu[i].putdata();
    }

    cout << "\n\n";

    cout << "Enter the roll no you want to update details :";
    cin >> roll;
    for (i = 0; i < n; i++)
    {
        if (stu[i].data(roll) == 1)
        {
            up = i;
        }
    }

    stu[up].update();

    cout << "\n\n";

    cout << "After update :\n";

    for (i = 0; i < n; i++)
    {
        cout << endl
             << "details of student " << i + 1 << endl;
        stu[i].putdata();
    }

    return 0;
}
