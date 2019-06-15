#include <iostream>
#include <string> 
#include "Student.h"
#include "App.h"

Student::Student():nameS("Student name by default"),passwordS("Student password by default"),groupName("group by default")
{
	cout << "Student was created with default constructor" << endl;
}

Student::Student(string name, string password, string group) : nameS(name), passwordS(password), groupName(group)
{
	cout << "Student was created with constructor of initialisation" << endl;
}

Student::Student(const Student &object) : nameS(object.nameS), passwordS(object.passwordS), groupName(object.groupName)
{
	cout << "Student was created with constructor of copy" << endl;
}

Student::~Student()
{
	cout << "Student was destroyed" << endl;
}

////////////////////////////////////////////////////////////////////////
// Name:       Student::write_test()
// Purpose:    Implementation of Student::write_test()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Student::write_test()
{
	// TODO : implement
	return 0;
}

////////////////////////////////////////////////////////////////////////
// Name:       Student::do_practice()
// Purpose:    Implementation of Student::do_practice()
// Return:     int
////////////////////////////////////////////////////////////////////////

void Student::do_practice(void)
{
	// TODO : implement
}
//setters
void Student::setNameS(string name)
{
	nameS = name;
	cout << "Student's name was setted as " << nameS << endl;
}

void Student::setPasswordS(string password)
{
	passwordS = password;
	cout << "Student's password was setted as " << passwordS << endl;
}

void Student::setGroupName(string group)
{
	groupName = group;
	cout << "Student's groupName was setted as " << groupName << endl;
}
//getters
string Student::getNameS()
{
	return nameS;
}
string Student::getPasswordS()
{
	return passwordS;
}
string Student::getGroupName()
{
	return groupName;
}
