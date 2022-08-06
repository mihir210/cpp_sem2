/*
Write a program to demonstrate the use of ‘Rethrowing an Exception’ concept
*/


#include <iostream>
using namespace std;

void divide(double x, double y)
{
   cout<<"inside function\n";
   try
   {
      if(y==0.0)
         throw y;
      else
      {
         cout<<"division = "<<x/y<<endl;
      }
      
   }
   catch(double a)
   {
      cout<<"Caught double inside function :";
      throw;
   }
   cout<<"End of function\n\n";
}
int main()
{
   cout<<"inside main\n";
   double a, b;
   cout<<"Enter the numerator :";
   cin>>a;

   cout<<"Enter the denominator :";
      cin>>b;
   
   try
   {
      divide(a,b);
      divide(20.0, 0.0);
   }
   catch(double a)
   {
      cout<<"caught double inside main\n";
   }
   cout<<"End of main\n";
    return 0;
}
