#include <iostream>
using namespace std;

class matrix
{
private:
   int **p;
   int d1,d2;

public:
   matrix(int x, int y);
   void get_element(int i, int j, int value)
   {
      p[i][j] = value;
   }
   int & put_element(int i, int j)
   {
      return p[i][j];
   }
   ~matrix()
   {
      for (int i = 0; i < d1; i++)
      {
         delete p[i];
      }
      delete p;

      
   }
};

matrix::matrix(int x, int y)
{
   d1  = x;
   d2 = y;
    p = new int *[d1];
    for (int i = 0; i < d1; i++)
    {
       p[i] = new int[d2];
    }
}



int main()
{
   int m ,n;

   cout<<"Enter size of matrix :";
   cin>>m>>n;

   matrix a(m,n);
   cout<<"Enter the element :";
   int i, j, value;

   for ( i = 0; i < m; i++)
   {
      for ( j = 0; j < n; j++)
      {
         cout<<"Enter the element "<<i+1 <<"    "<<j+1<<endl;
         cin>>value;
         a.get_element(i, j, value);
      } 
   }
   for ( i = 0; i < m; i++)
   {
      for ( j = 0; j < n; j++)
      {
         cout<<a.put_element(i, j)<<"\t";
      }
      cout<<endl;
      
   }
   
   
    return 0;
}
