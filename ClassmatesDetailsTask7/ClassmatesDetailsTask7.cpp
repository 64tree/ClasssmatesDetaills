// ClassmatesDetailsTask7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

#include "Class.h"

using namespace std;

int main()
{
	Classmates myClass;
	int choice;
	bool gameOn = true;
	while (gameOn != false) {

		//system("CLS");

		cout << "*******************************\n";
		cout << " 1 - Add new student to the class. \n";
		cout << " 2 - Remove student from the class.\n";
		cout << " 3 - Print all students in the class.\n";
		cout << " 4 - Clear the class list.\n";
		cout << " 5 - Exit.\n";
		cout << " Enter your number of choice and press return: ";

		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Add new student to the class.\n";
			
			break;
		case 2:
			cout << "Remove student from the class\n";
			myClass.removeStudent();
			break;
		case 3:
			cout << "Print all students in the class\n";
			myClass.printAllStudent();
			
			break;
		case 4:
			cout << "Clear the class list";
			myClass.clearClassList();
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
