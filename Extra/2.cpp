// swap without using third veriable

#include <iostream> 
#include <cstring>	


using namespace std;

int main()
{
    int a, b;

    cout<<"enter the value of a and b"<<endl;

    cin>>a>>b;

    a=a+b;
    b=a-b;

    a=a-b;

    cout<<"value of a is "<<a<<" and value of b is "<<b<<endl;

    return 0;
}
