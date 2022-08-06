/*
 Write a class template to represent a generic vector. Include member functions to 
perform the following tasks:
(a) To create the vector
(b) To modify the value of a given element
(c) To multiply by a scalar value
(d) To display the vector in the following form (10, 20, 30 …)
*/

#include <iostream>
using namespace std;

template<typename vec>
class Vector
{
private:
   vec *p;
   int length;
public:
   Vector(){}
   Vector(vec *a, int l);
   void modify(vec x, vec y);
   void multiply(vec k);
   void display()
   {
      cout<<endl;
      for (int i = 0; i < length; i++)
      {
         cout<<*(p+i)<<"\t";
      }
      cout<<endl;
   }
};


template<typename vec>
Vector<vec>::Vector(vec *a, int l)
{
   p = new vec[l];
   length = l;
   for (int i = 0; i < length; i++)
   {
      *(p+i) = *(a+i);
   }
   cout<<"initial vector\n";
   display();
}

template<typename vec>
void Vector<vec>::modify(vec x , vec y)
{
   int flag = 0;
   for (int i = 0; i < length ; i++)
   {
      if (*(p+i)==x)
      {
         *(p+i) = y;
         flag  =1;
      }
   }
   if (flag)
   {
      cout<<"\nmodified vector\n";
      display();
   }
   else
   {
      cout<<"no match found\n";
   }
}

template <typename vec>
void Vector<vec>::multiply(vec k)
{
   for (int i = 0; i < length; i++)
   {
      *(p+i) *= k;
   }
   cout<<"\nmultiplid vector\n";
   display();
}

int main()
{
   double a[]= {1,2,3,4,5};
   double b[] = {6,7,8,9,10};
   Vector<double> v1(a ,5), v2(b, 5);

   cout<<"\nmodifining v1 vector\n";
   v1.modify(4, 89);

   cout<<"\nmodifining v2 vector\n";
   v2.modify(4, 89);

   cout<<"v2 * 2\n";
   v2.multiply(2);
    return 0;
}
