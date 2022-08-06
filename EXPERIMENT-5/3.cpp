/*
Define distance class having data members feet and inches. Overload plus and minus 
operators for adding and subtracting two given distances respectively
*/
#include <iostream>
using namespace std;

class Distance
{
private:
   int feet;
   int inches;
public:
   void getdata(int a, int b){
      feet = a;
      inches = b;
   }
   void putdata()
   {
      cout<<"feet = "<<feet<<"\nInches = "<<inches<<endl;
   }
   friend Distance operator+(Distance, Distance);
   friend Distance operator-(Distance, Distance);
};

Distance operator+(Distance a, Distance b)
{
   Distance c;
   c.inches = a.inches + b.inches;
   c.feet = 0;
   c.feet = c.inches/12;
   c.inches %=12;
   c.feet+= a.feet + b.feet;
   return c; 
}

Distance operator-(Distance a, Distance b)
{
   Distance c;
   c.feet = 0;
      c.inches = a.inches - b.inches;
      c.feet = c.inches/12;
      c.inches%=12;
      c.feet+= a.feet - b.feet;

      if (c.inches<0)
      {
         c.inches  = c.inches + c.feet*12;
         c.feet  = c.inches/12;
         c.inches %=12;
      }
      return c;
   

}
int main()
{
   Distance d1, d2, d3, d4;
   int a ,b;

   cout<<"Enter the first distance in feet and inches :";
   cin>>a>>b;
   d1.getdata(a, b);

   cout<<"Enter the Second distance in feet and inches :";
   cin>>a>>b;
   d2.getdata(a, b);

   cout<<"after addition :";
   d3 = d1+d2;
   d3.putdata();

   cout<<"After substraction :";
   d4 = d1-d2;
   d4.putdata();
    return 0;
}
