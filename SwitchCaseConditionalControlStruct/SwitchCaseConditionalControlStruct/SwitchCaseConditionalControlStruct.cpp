// SwitchCaseConditionalControlStruct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Program to take input from user (1-7) and print the corresponding week day
//i.e 1=Monday, 2=Tuesday and so on

/*If else syntax

if(x>50)
if(x<50 || x x>10)

*/

//Switch Gates only operate in INTEGER Type
//Is usefule when we have many distinct conditions

int main()
{
	int num;
	cout << "Enter a number between 1 and 7:";
	cin >> num;

	switch (num)
	{
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;
	case 3:
		cout << "Wednesday";
		break;
	case 4:
		cout << "Thursday";
		break;
	case 5:
		cout << "Friday";
		break;
	case 6:
		cout << "Saturday";
		break;
	case 7:
		cout << "Sunday";
		break;
		//optional
	default:
		cout << "Invalid Input";
	}
	//end of switch case

	return 0;
}

