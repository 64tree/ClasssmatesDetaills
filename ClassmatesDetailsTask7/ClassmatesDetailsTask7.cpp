// ClassmatesDetailsTask7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

int main()
{
	int choice;
	bool gameOn = true;
	while (gameOn != false) {
		cout << "*******************************\n";
		cout << " 1 - Add new student to the class \n";
		cout << " 2 - Remove student from the class.\n";
		cout << " 3 - print all students in the class.\n";
		cout << " 4 - clear the class list.\n";
		cout << " 5 - Exit.\n";
		cout << " Enter your number of choice and press return: ";

		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "game start!\n";
			// rest of code here
			break;
		case 2:
			cout << "Story so far....\n";
			// rest of code here
			break;
		case 3:
			cout << "Ahahah, you really think I will help you?\n";
			// rest of code here
			break;
		case 4:

			break;
		case 5:
			cout << "Exit\n";
			gameOn = false;
			break;
		default:
			cout << "Not a Valid Choice. \n";
			cout << "Choose again.\n";
			choice = NULL;
			//cin >> choice;
			break;
		}

	}
	return 0;
}
