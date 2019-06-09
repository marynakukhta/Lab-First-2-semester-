#include <sstream>
#include <iostream>
#include <string>
#include <cstring>
#include "Teacher.h"
#include "Student.h"

Teacher::Teacher():nameT("Teacher name by default"),passwordT("Teacher password by default"),subjectName("subject by default"),groups()
{
	groups.push_back("PI-71");
	cout << "Teacher was created with default constructor" << endl;
}

Teacher::Teacher(string name, string password, string subject, vector<string> group) : nameT(name), passwordT(password), subjectName(subject),groups(group)
{
	cout << "Teacher was created with constructor of initialisation" << endl;
}

Teacher::Teacher(const Teacher &object) : nameT(object.nameT), passwordT(object.passwordT), subjectName(object.subjectName), groups(object.groups)
{
	cout << "Teacher was created with constructor of copy" << endl;
}

Teacher::~Teacher()
{
	cout << "Teacher was destroyed" << endl;
}


////////////////////////////////////////////////////////////////////////
// Name:       Teacher::make_test()
// Purpose:    Implementation of Teacher::make_test()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Teacher::make_test(void)
{
	// TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Teacher::run_test()
// Purpose:    Implementation of Teacher::run_test()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Teacher::run_test()
{
	// TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Teacher::make_presentation()
// Purpose:    Implementation of Teacher::make_presentation()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Teacher::make_presentation(void)
{
	// TODO : implement
}

void Teacher::setNameT(string name)
{
	nameT = name;
	cout << "Teacher's name was setted as " << nameT << endl;
}
//setters
void Teacher::setPasswordT(string password)
{
	passwordT = password;
	cout << "Teacher's password was setted as " << passwordT << endl;
}

void Teacher::setSubjectName(string subject)
{
	subjectName = subject;
	cout << "Teacher's subject name was setted as " << subjectName << endl;
}

void Teacher::setGroups(string groupName)
{
	groups.push_back(groupName);
}
//getters
string Teacher::getNameT()
{
	return nameT;
}
string Teacher::getPasswordT()
{
	return passwordT;
}
string Teacher::getSubjectName()
{
	return subjectName;
}
string Teacher::getGroups(int i)
{
	return groups[i];
}
