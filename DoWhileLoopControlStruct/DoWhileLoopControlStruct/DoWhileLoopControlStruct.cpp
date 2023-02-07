// DoWhileLoopControlStruct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

//This program will once again print "I am a Programmer" while USER enters 'x' but using a doWhile loop
//In a while loop the condition is checked first, but in a doWhile loop it is checked after the first iteration
int main()
{
	char myChar;

	do 
	{
		cout << "I am a programmer" << "Enter x character to print the message again";
		cin >> myChar;

	} 
	while (myChar == 'x');

	return 0;
}
//Do while loop isnt used much except in specific circumstances where it is beneficial to do the process before specifying the condition