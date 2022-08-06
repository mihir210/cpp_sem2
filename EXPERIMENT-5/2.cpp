/*
Write a program that calculates multiplication of two complex numbers by 
overloading multiplication sign.
*/

#include <iostream>
using namespace std;

class Complex
{
private:
   float real;
   float img;
public:
   Complex operator *(Complex);
   void getdata(float a, float b)
   {
      real = a;
      img = b;
   }
   void putdata()
   {
      cout<<real<<" + i"<<img<<endl;
   }
};

Complex Complex::operator*(Complex a)
{
   Complex c;
   c.real = real*a.real - img*a.img;
   c.img  =real*a.img + a.real*img;
   return c;
}

int main()
{
   Complex c1, c2, c3;
   float a, b;
   cout<<"Enter the first complex number :";
   cin>>a>>b;
   c1.getdata(a, b);

   cout<<"Enter the second complex number :";
   cin>>a>>b;
   c2.getdata(a,b);

   c3 = c1*c2;

   c3.putdata();

    return 0;
}
