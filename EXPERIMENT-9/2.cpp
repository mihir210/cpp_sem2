/*
Write a program that can throw integer, char and double exceptions in the same try 
block. Implement respective exception handling (multiple and single catch 
mechanism).
*/

#include <iostream>
using namespace std;

int main()
{
   int n;
   cout<<"1. for throw the integer\n2. for throw the char\n3. for throw the double";
   cin>>n;

   try
   {
      if (n==1)
      {
         int a;
         cout<<"Enter the integer :";
         cin>>a;
         throw a;
      }
      else if (n==2)
      {
         char b;
         cout<<"Enter the char :";
         cin>>b;
         throw b;
      }
      else if (n==3)
      {
         double c;
         cout<<"Enter the double:";
         cin>>c;
         throw c;
      }
   }
   catch(int a)
   {
      cout<<"Entered integer is"<<a<<endl;
   }
   catch(char b)
   {
      cout<<"Entered char is "<<b<<endl;
   }
   catch(double c)
   {
      cout<<"Entered double is "<<c<<endl;
   }
   // catch(...)
   // {
   //    cout<<"Exception occurred !\n";
   // }
   cout<<"End main";
   
    return 0;
}