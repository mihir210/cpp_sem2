#include "com.cpp"


int main()
{
    int a, b, c, sum;
    float avg;

    cout << "enter the value of a, b and c" << endl;

    cin >> a >> b >> c;

    sum = a + b + c;

    avg = sum * 1.0 / 3;

    cout << "average is " << avg;

    return 0;
}
