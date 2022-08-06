/*
Create a class time with data as hours and minutes.
a. Write a function gettime and puttime to read and display data of time class.
b. Design a function called sum() that accepts two objects as arguments and displays
the sum of two time objects.

*/

#include <iostream>
using namespace std;

class time
{
private:
    int hours;
    int minutes;

public:
    void gettime();
    void puttime();
    void sum(time, time);
};

void time::gettime()
{
    cout << "Enter the hours :";
    cin >> hours;

    cout << "Enter the minutes :";
    cin >> minutes;
}

void time::puttime()
{
    cout << "Hours is :" << hours << "\n Minutes is :" << minutes << endl;
}

void time ::sum(time a, time b)
{
    minutes = a.minutes + b.minutes;

    hours = minutes / 60;
    minutes = minutes % 60;

    hours = hours + a.hours + b.hours;
}

int main()
{
    time t1, t2, t3;

    cout << "Enter the time :";
    t1.gettime();

    cout << "Enter the time :";
    t2.gettime();

    t3.sum(t1, t2);

    cout << "All times :";
    t1.puttime();
    t2.puttime();
    t3.puttime();

    return 0;
}
