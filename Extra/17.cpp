#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()

{

struct student
{
string str;

string str2('Welcome to ');

string str3('the world of C++ programming');

str.append(str2);

str.append(str3, 4, 8);

str.append(str3.begin() + 16, str3.end());

str.append(5,0x2e);

cout << str << '\n';
return 0;

}