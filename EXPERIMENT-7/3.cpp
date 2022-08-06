/*
 Create a base class called shape. Use this class to store two double type values that 
could be used to compute the area of figures. Derive two specific classes called 
triangle and rectangle from the base shape. 
• Add to the base class, a member function get_data() to initialize base class data 
members and another member function display_area() to compute and display the 
area of figures. Make display_area() as a virtual function and redefine this 
function in the derived classes to suit their requirements.
• Using these three classes, design a program that will accept dimensions of a 
triangle or a rectangle interactively, and display the area.
Area of rectangle = x * y
Area of triangle = ½ * x * y
*/

#include <iostream>
using namespace std;

class shape
{
protected:
   double x, y;
public:
   void get_data(double a, double b)
   {
      x =a;
      y =b;
   }
   virtual void display_area()= 0;
};

class triangle : public shape
{

public:
   void display_area()
   {
      double ans;
      ans = (x*y)/2;
      cout<<"Area of triangle is :"<<ans<<endl;
   }

};

class rectangle: public shape
{
public:
   void display_area()
   {
      double ans;
      ans = (x*y);
      cout<<"Area of rectangle is :"<<ans<<endl;
   }
};
int main()
{
   double a, b;
   int temp;
   shape *ptr;
   cout<<"1 for triangle\n2 for rectangle";
   cin>>temp;

   if (temp==1)
   {
      cout<<"Enter the dimention of triangle :";
      cin>>a>>b;
      triangle t;
      ptr = &t;
      ptr->get_data(a,b);
      ptr->display_area();
   }
   else if (temp==2)
   {
      cout<<"Enter the dimention of rectangle :";
      cin>>a>>b;
      rectangle r;
      ptr = &r;
      ptr->get_data(a,b);
      ptr->display_area();
   }
   

   return 0;
}
