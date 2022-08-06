/*
Write a program to implement Bubble Sort using template functions.
*/

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void BubbleSort(T arr[], int n)
{
   for (int i = 0; i < n - 1; ++i)
   {
      for (int j = 0; j < n - i - 1; ++j)
      {
         if (arr[j] > arr[j + 1])
         {
            T temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
         }
      }
   }
}

template <typename D>
void PrintArray(D arr[], int n)
{
   for (int i = 0; i < n; ++i)
      cout << arr[i] << "\t";
   cout << "\n\n";
}

int main()
{

   int n, *irr, te;
   float *frr;
  
   cout << "Enter the total size of array :";
   cin >> n;

   cout << "1.for int\n2.for float";
   cin >> te;

   if (te == 1)
   {
      irr = new int[n];
      int i;
      cout<<"Enter the array\n";
      for (int i = 0; i < n; i++)
      {
         cout<<"Enter the element "<<i+1<<" :";
         cin>>irr[i];
      }
      cout << "Array Before Sorting: " << endl;
      PrintArray(irr, n);

      BubbleSort(irr, n);

      cout << "Array After Sorting: " << endl;
      PrintArray(irr, n);
   }
   else if (te == 2)
   {
      frr = new float[n];
      int i;
      cout<<"Enter the array\n";
      for (int i = 0; i < n; i++)
      {
         cout<<"Enter the element "<<i+1<<" :";
         cin>>frr[i];
      }
      cout << "Array Before Sorting: " << endl;
      PrintArray(frr, n);

      BubbleSort(frr, n);

      cout << "Array After Sorting: " << endl;
      PrintArray(frr, n);
   }
   return 0;
}