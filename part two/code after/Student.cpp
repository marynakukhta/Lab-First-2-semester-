#include <iostream>
#include <string> 
#include "Student.h"
#include "Teacher.h"
#include "App.h"
#include "Error.h"

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


void Student::do_practice(VirtualMaterial&vm)
{
	cout << "Student " << nameS << " has done practise with the virtual material: " << vm.getName() << endl;
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

int Student::write_test(Teacher&teacher)
{
	try{
		if (teacher.make_test() == "")
		{
			throw (Error(teacher.make_test()));
		}
		cout << "Student " << nameS << " has written the test: " << teacher.make_test() << " creates by the Teacher: " << teacher.getNameT() << endl;
		return rand() % 101;
	}
	catch (Error er)
	{
		cout << "There is empty test!" << endl << endl;
		return 0;
	}
	
}


Student Student::operator=(Student student)
{
	nameS = student.nameS;
	passwordS = student.passwordS;
	groupName = student.groupName;
	return *this;
}

istream& operator>>(istream& is, Student& student)
{
	cout << "Student's name: "; is >> student.nameS;
	cout << "Student's password: "; is >> student.passwordS;
	cout << "Student's groupName: "; is >> student.groupName;
	return is;

}


ostream& operator<<(ostream& os, const Student& student)
{
	os << "Student's name: " << student.nameS << endl << "Student's password: " << student.passwordS << endl << "Student's groupname: " << student.groupName << endl;
	return os;
}
