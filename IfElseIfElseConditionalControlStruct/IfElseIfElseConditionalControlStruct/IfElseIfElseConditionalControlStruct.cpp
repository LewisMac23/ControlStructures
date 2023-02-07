// IfElseIfElseConditionalControlStruct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
//Solution 1 - To find out whether a given number is positive or negative
//Take input x, if x<0 then print negative else x the print positive
//EDITED FOR SOLUTION 2
//Solution 2 - To find out whether a given number is positive, negative or zero
//Take input x, if x<0 then print negative, else if x>0 then print positive, else print "0"

	cout << "Please enter a number:";
	int x;
	cin >> x;

	if (x < 0)
	{
		cout << "Negative";
		// x < 0
	}

	else if (x > 0)
	{
		cout << "Positive";
	}
	else
	{
		cout << "The number is 0";
		// x > 0
	}
	//cout << "Value of x is:" << x;

	return 0;
}


