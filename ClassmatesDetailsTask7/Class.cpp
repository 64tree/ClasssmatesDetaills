
#include "stdafx.h"
#include "Class.h"

#include <iostream>

 Classmates::Classmates()
{


	ClassmatesAttributes[1] = "Sam B.";
	ClassmatesAttributes[2] = "Adrian C.";
	ClassmatesAttributes[3] = "Sam M.";
	ClassmatesAttributes[4] = "Mark R.";
	ClassmatesAttributes[5] = "Peter U.";
	ClassmatesAttributes[6] = "James .";
	ClassmatesAttributes[7] = "Harry .";
	ClassmatesAttributes[8] = "Margret P.";
	ClassmatesAttributes[9] = "Liam ";
	ClassmatesAttributes[10] = "Robin.";

}

 void Classmates::clearClassList()
 {
	 ClassmatesAttributes.clear();
	 cout << "You have cleared the list";
	

 }

 
 



 void Classmates::removeStudent()
 {
	 ID Id;
	 cin >> Id;
	 ClassmatesAttributes.erase(Id);

 }


 void Classmates::addStudent()
 {
	 ClassmatesAttributes;
 
 }



 void Classmates::printAllStudent()
 {
	//checks to see if there is any people in the class list 
	 if (ClassmatesAttributes.empty() == false) 	 
	 {
		 for (map<int, string>::iterator ii = ClassmatesAttributes.begin(); ii != ClassmatesAttributes.end(); ++ii)

		 {

			 cout << (*ii).first << ": " << (*ii).second << endl;

		 }


	 }
	 else {
	 
		 cout << "there is no students in the list. ";
	 }

		

 
 
 }