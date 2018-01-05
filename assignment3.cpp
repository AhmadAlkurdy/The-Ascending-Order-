// Ahmad Alkurdy
// Assignment 3
// the ascending order of three numbers
#include <iostream>
using namespace std;
int main ()
{
	// Declaire variebals 
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	// entring the numbers
	cout << "Enter the first number " << endl;
	cin >> num1;
	cout << "Enter the second number " << endl;
	cin >> num2;
	cout << "Enter the third number " << endl;
	cin >> num3;

	// If statment to get the ascending order

	if ( num1 >= num2 && num2 >= num3 )
		cout << "The ascending order is " << num3 << ", " << num2 << ", " << num1 << "." << endl;
	else if  ( num1 <= num2 && num2 <= num3 )
		cout << "The ascending order is " << num1 << ", " << num2 << ", " << num3 << "." << endl;
	else if (( num1 >= num2  && num2 <= num3) && (num1 >= num3))
		cout << "The ascending order is " << num2 << ", " << num3 << ", " << num1 << "." << endl;
	else if (( num1 >= num2 && num2 <= num3 ) && ( num1 <= num3 ))
		cout << "The ascending order is " << num2 << ", " << num1 << ", " << num3 << "." << endl;
	else if (( num1 <= num2 && num2 >= num3 ) && ( num1 >= num3))
		cout << "The ascending order is " << num3 << ", " << num1 << ", " << num2 << "." << endl;
	else if  (( num1 <= num2  && num2 >= num3) && ( num1 <= num3))
		cout << "The ascending order is " << num1 << ", " << num3 << ", " << num2 << "." << endl; 

	system ("pause");
	return 0;
}




	