/*
Write a program that has divide() function which throws and catches division by zero 
exception
*/

#include <iostream>
using namespace std;

float divide(float num, float den)
{
	if (den == 0) {
		throw (den);
	}
	else
	{
	return (num / den);
		
	}	
} 

int main()
{
	float numerator, denominator, result;
	cout<<"Enter the numerator :";
   cin>>numerator;

   cout<<"Enter the denominator :";
   cin>>denominator;

	try {
		result = divide(numerator, denominator);
		cout << "The quotient is "
			<< result << endl;
	}
	catch (float a) {
		cout << "Exception occurred" << endl;
	}

} 
