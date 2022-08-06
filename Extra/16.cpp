#include <iostream>
using namespace std;

class MovingPoint
{
private:
    int x;
    int y;
public:
   static void initialize(int a, int b)
   {  
      x =a;
      y=b;
   }
   void move_left(int a)
   {
      x = x - a ;
   }
   void move_right(int a)
   {
      x = x + a;
   }
   void move_up(int b)
   {
      y = y + b;
   }
   void move_down(int b)
   {
       y = y - b;
   }
   void print_current_position()
   {
      std::cout<<x<<" "<<y;
   }

};




int main() 
{
  
  MovingPoint mp;
  int x, y, n, i, units;
  char direction;
  
  std::cin >> x >> y;
  mp.initialize(x, y);
  
  std::cin >> n;
  for(i = 0; i < n; i++)
  {
    std::cin >> direction >> units;
    switch(direction)
    {
      case 'L':
        mp.move_left(units);
        break;
      case 'R':
        mp.move_right(units);
        break;
      case 'U':
        mp.move_up(units);
        break;
      case 'D':
        mp.move_down(units);
        break;
    }
  }
  
  // This call to initialize method should be ingored
  // If this method is called twice, it should be ignored as per specification
  // This call should not change the state of the object
  mp.initialize(0, 0);
  
  // Printing final position of the point as output
  mp.print_current_position();
  
  return 0;
}