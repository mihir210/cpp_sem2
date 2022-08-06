#include "9.cpp"

void time::gettime()
{
    cout << "Enter the hours :";
    cin >> h;

    cout << "Enter the minutes :";
    cin >> m;
}

void time::puttime()
{
    cout << "Hours is :" << h << "\n Minutes is :" << m << endl;
}

void time ::sum(time a, time b)
{
    m = a.m + b.m;

    h = m / 60;
    m = m % 60;

    h = h + a.h + b.h;
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
