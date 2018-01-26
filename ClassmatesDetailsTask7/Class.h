#ifndef CLASSMATES_H
#define CLASSMATES_H

#include <string>
#include <map>
using namespace std;

typedef int ID; // type of the ID of the person 
typedef int age;

class Classmates
{
private:
		// mapping between student ID and other attributes 
	
//	vector <sutdent>;		// an instance of the lorenz machine class


public:
	// constructors
	Classmates(); // default constructor
	map<ID, string > ClassmatesAttributes;

	void printAllStudent();
	void removeStudent();
	void addStudent();
	void clearClassList();
};

#endif