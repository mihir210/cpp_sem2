/*
Write a program to demonstrate use of pointer with following concepts:
• Arithmetic operations on pointers
• Pointers with Arrays & Arrays of Pointers
• Pointers to functions
• Array of Pointers to Objectsz
**/


#include<bits/stdc++.h>
using namespace std;

class Pointer 
{
   char *name[10]; //Arrays of Pointers
   int len;
public:
   int n[20];
   int num;
   void number();
   void putnumber();
   void getname();
   void putname();
};
void Pointer::number()
{
   
   int *ptr;
   cout<<"Enter the total number of array :";
   cin>>num;
   for (int i = 0; i < num; i++)
   {
      cout<<"Enter "<<i+1;
      cin>>n[i];
   }
}
void Pointer::putnumber()
{
   for (int i = 0; i < num; i++)
   {
      cout<<n[i]<<endl;
   }
}
typedef void (*funptr)(int c[], int n, int a);   //Pointers to functions
void search(int c[], int n, int a)
{
   int *p= c;   //Pointers with Arrays
   for (int i = 0; i < n; i++)
   {
      if (*p==a)
      {
         cout<<a<<" is present in array.";
         break;
      }      
      else if (i == (n-1))
      {
         cout<<"Not present :";
      }
      p++;   //Arithmetic operations on pointers
   }
}

void Pointer::getname()
{
   name[0]="Books";
   name[1]= "television";
   name[2] = "sports";
   name[3] = "computer";
}

void Pointer::putname()
{
   for (int i = 0; i < 4; i++)
   {
      cout<<name[i]<<endl;
   }
}

int main()
{
   Pointer *p1[10];  // Array of Pointers to Objects

   int option;
   int n=0;
   p1[n] = new Pointer;
   do
   {
      p1[n]->number();
      p1[n]->getname();
      n++;
      cout<<"1.More add entry  0.No more Entry :";
      cin>>option;
   } while (option);
   
   for (int i = 0; i <n; i++)
   {
      cout<<"Enter the Element you want to search :";
      int temp;
      cin>>temp;
      funptr f1;
      f1 = &search;   //Pointers to functions
      f1(p1[i]->n, p1[i]->num, temp);
      cout<<"Total numbers :\n";
      p1[i]->putnumber();
      cout<<"Total name\n";
      p1[i]->putname();
      delete p1[i];
   }
    return 0;
}
