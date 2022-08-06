#include <iostream>
using namespace std;

class abc
{
   
public:
   void print() const
   {
      cout<<"hello";
   }
};


int main()
{
   const abc a;
   a.print();

    return 0;
}
