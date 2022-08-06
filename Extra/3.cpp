#include <iostream> 
#include <cstring>	
using namespace std;

int main()
{
    int a=0, b=1, sum, n;

    cout<<"enter the number of term :"<<endl;
    cin>>n;
    n=n-2;
    cout<<a<<"\t"<<b<<"\t";
    while (n>0)
    {
        sum=a+b;
        cout<<sum<<"\t";
        a=b;
        b=sum;
        n--;
    }
        
    return 0;
}
