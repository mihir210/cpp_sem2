#include <iostream>
using namespace std;

class alpha
{
private:
   int x;
public:
   alpha(int i)
   {
      x =i;
      cout<<"alpha \n";
   } 
   void show_x()
   {
      cout<<"x = "<<x<<endl;
   }
};

class beta
{
private:
   float y;
public:
   beta(float i)
   {
      y = i;
      cout<<"beta \n";
   }
   void show_y()
   {
      cout<<" y = "<<y<<endl;
   }
};

class gamma :public beta, public alpha
{
private:
   int m,n;
public:
   gamma(int a, float b, int c, int d):alpha(a), beta(b)
   {
      m = c;
      n = d;
      cout<<"gamma \n";
   }
   void show_mn()
   {
      cout<<"m ="<<m<<"\n n ="<<n<<endl;
   }
};

int main()
{
   gamma g(5, 10.5, 20, 30);

   g.show_x();
   g.show_y();
   g.show_mn();
   
   
    return 0;
}

