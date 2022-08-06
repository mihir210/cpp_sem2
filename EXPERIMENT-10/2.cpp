/*

Write a program which overloads template function with explicit function.
*/


#include <bits/stdc++.h>
using namespace std;


template <class T>


void display(T t1)
{
	cout << "Displaying Template: "
		<< t1 << "\n";
}


void display(int t1)
{
	cout << "Explicitly display: "
		<< t1 << "\n";
}


int main()
{
   int a;
   char c;
   float b;

   cout<<"Enter the int :";
   cin>>a;

   cout<<"Enter the float :";
   cin>>b;

   cout<<"Enter the char :";
   cin>>c;

	
	display(a);
	display(b);
	display(c);

	return 0;
}
