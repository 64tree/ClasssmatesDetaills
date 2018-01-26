
#include "stdafx.h"
#include "Class.h"

#include <iostream>

 Classmates::Classmates()
{

	//ClassmatesAttributes[0] = "Mike C.",32 ;
	ClassmatesAttributes[1] = "Mike C.";
	ClassmatesAttributes[2] = "Mike C.";
	ClassmatesAttributes[3] = "Mike C.";
	ClassmatesAttributes[4] = "Mike C.";
	ClassmatesAttributes[5] = "Mike C.";
	ClassmatesAttributes[6] = "Mike C.";
	ClassmatesAttributes[7] = "Mike C.";
	ClassmatesAttributes[8] = "Mike C.";
	ClassmatesAttributes[9] = "Mike C.";
	ClassmatesAttributes[10] = "Mike C.";

}

 //grade_list.erase("John");


 void Classmates::printAllStudents()
 {
	 cout << endl << "Natural Order:" << endl;
	 
		 for (map<int, string>::iterator ii = ClassmatesAttributes.begin(); ii != ClassmatesAttributes.end(); ++ii)

		 {

				cout << (*ii).first << ": " << (*ii).second << endl;

		 }



 
 
 }