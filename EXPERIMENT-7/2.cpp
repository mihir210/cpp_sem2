/*
Create a base class with two functions, display() and show(). Given function show() 
is a virtual function. Create a derived class which extends the base class.
*/

#include <iostream>
using namespace std;

class Base
{   
public:
   void display()
   {
      cout<<"\n base display.\n";
   }
   virtual void show()
   {
      cout<<"\nbase show\n";
   }
};

class Derived : public Base
{
public:
   void display()
   {
      cout<<"\n Derived display.\n";
   }
   void show()
   {
      cout<<"\nderived show\n";
   }
};


int main()
{
   Base b;
   Derived d;
   Base *bptr;

   cout<<"\n bptr points to Base\n";
   bptr= &b;
   bptr->display();
   bptr->show();

   cout<<"\n bptr points to derived\n";
   bptr = &d;
   bptr->display();
   bptr->show();
    return 0;
}
