// WhileLoopControlST.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//This program prints "I am a Programmer" while USER enters "x"
//Number of times to print is dependant on user/not known so a WHILE loop is used
int main()
{
    char myChar;
    cout << "Enter a character:"<< endl;
    cin >> myChar;

    while (myChar == 'x')
    {
        cout << "I am a Programmer" << "Enter a character again:";
        cin >> myChar;

    }

    return 0;
}
