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



string Teacher::make_test(void)
{
	return "";
}



void Teacher::run_test()
{
	cout << "Teast was run" << endl;
}



string Teacher::make_presentation(void)
{
	return "presentation";
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


Teacher Teacher::operator=(Teacher teacher)
{
	nameT = teacher.nameT;
	passwordT = teacher.passwordT;
	subjectName = teacher.subjectName;
	groups = teacher.groups;
	return *this;
}

istream& operator>>(istream& is, Teacher& teacher)
{
	cout << "Teacher's name: "; is >> teacher.nameT;
	cout << "Teacher's password: "; is >> teacher.passwordT;
	cout << "Teacher's subjectName: "; is >> teacher.subjectName;
	cout << "Teacher's groups:(enter one group and press button enter to continue input or enter 'stop' to stop): ";
	int i = 0;
	string x;
	teacher.groups.clear();
	while (cin >> x)
	{
		if (x == "stop")
			return is;
		else
			teacher.groups.push_back(x);
		cout << "Teacher's groups: ";
	}
	return is;
}


ostream& operator<<(ostream& os, const Teacher& teacher)
{
	os << "Teacher's name: " << teacher.nameT << endl << "Teacher's password: " << teacher.passwordT << endl << "Teacher's subjectName: " << teacher.subjectName << endl;
	os << "Teacher's groups: ";
	for (int i = 0; i < teacher.groups.size(); i++)
	{
		os << teacher.groups[i] << "  ";
	}
	cout << endl;
	return os;
}
