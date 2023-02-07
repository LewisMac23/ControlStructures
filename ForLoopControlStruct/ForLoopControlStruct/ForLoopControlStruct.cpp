// ForLoopControlStruct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Solution 1 - prints "I am a programmer" 5 times
//Solition 2 - prints multiplication table of 5
//For loop is used when we know how many times we are going to call the same thing again and again

//solution 1
int main()
{
	for (int i = 1; i <= 5; i++)
	{
		cout << "I am a Programmer" << endl;
	}

	return 0;
}

//solution 2 (put in main)
{
	int x = 5;
	for (int i = 1; i < -10; i++)
	{
		cout << "5 x" << i << "=" << (x * 1) << endl;
		// 5 x 1 = 5
		// 5 x 2 = 10
	}
}