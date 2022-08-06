#include <iostream>
using namespace std;

class triangle
{
public:
   void tria()
   {
      cout<<"I am an isosceles triangle\n";
   }
};

class isotri
{
public:
   void isotriangle()
   {
      cout<<"In an isosceles triangle two sides are equal\n";
   }
};

class tri: public triangle, public isotri
{
   
public:
  void show()
  {
     cout<<"I am a triangle\n";
  }
};

int main()
{
   tri t1;
    
   t1.tria();
   t1.isotriangle();
   t1.show();

    return 0;
}
