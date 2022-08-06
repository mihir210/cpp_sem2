/*
perform following string operations using standard c++ string class function

a = insert()
b= erase()
c = replace()
d = size()
e = compare()
f = length()
g =  swap()
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
     string s1;
     string s2("Hello");

     cout << "Enter the string :" << endl;
     getline(cin, s1);

     s1.insert(4, s2);
     cout << "after insert s2 at 4 th index :" << endl
          << s1 << endl;

     s1.erase(4, 5);
     cout << endl
          << "After erase 5 character at 4 th index :" << s1 << endl;

     s1.replace(2, 3, s2);
     cout << endl
          << "After replace 2 index and 3 character with s2 :" << s1 << endl;

     cout << endl
          << "size of string s1 is " << s1.size() << endl;

     if (s1.compare(s2) == false)
     {
          cout << endl
               << "strings are same ." << endl;
     }
     else
     {
          cout << endl
               << "strings are not same ." << endl;
     }

     cout << endl
          << "length of s1 is " << s1.length() << endl;

     cout << endl
          << "before swap" << s1 << endl;

     s1.swap(s2);

     cout << endl
          << "after swap" << s1 << endl;
     return 0;
}
