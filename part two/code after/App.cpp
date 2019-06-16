#include <iostream>
#include <string> 
#include <vector>
#include "Student.h"
#include "Teacher.h"
#include "MaterialCreator.h"
#include "Marker.h"
#include "VirtualMaterial.h"
#include "App.h"

App::App():studentsList(1,new Student()),teacherList(1,new Teacher()),catalog(1,new VirtualMaterial()),materialCreator(1,new MaterialCreator())
{
	cout << "App was created with default constructor" << endl;
}


App::App(Student*student, Teacher*teacher, VirtualMaterial*material, MaterialCreator*creator):studentsList(1,student),teacherList(1,teacher),catalog(1, material),materialCreator(1, creator)
{
		cout << "App was created with constructor of initialisation" << endl;
}
App::App(const App &object) : studentsList(object.studentsList), teacherList(object.teacherList), catalog(object.catalog), materialCreator(object.materialCreator)
{
	cout << "Student was created with copy constructor"<< endl;
	cout << "Teacher was created with copy constructor" << endl;
	cout << "VirtualMaterial was created with copy constructor" << endl;
	cout << "MaterialCreator was created with copy constructor" << endl;
	cout << "App was created with constructor of copy" << endl;
}

App::~App()
{
	for (int i = 0; i < studentsList.size(); i++) {
		delete studentsList[i];
	}
	for (int i = 0; i < teacherList.size(); i++) {
		delete teacherList[i];
	}
	for (int i = 0; i < catalog.size(); i++) {
		delete catalog[i];
	}
	for (int i = 0; i < materialCreator.size(); i++) {
		delete materialCreator[i];
	}
	cout << "App was destroyed" << endl;
}

void App::view_catalog()
{
	for (int i = 0; i < catalog.size(); i++)
	{
		cout << *(catalog[i]);
	}
}


bool App::log_in_stud(Student&student)
{
	for (int i = 0; i < studentsList.size(); i++)
	{
		if (student.getPasswordS() == studentsList[i]->getPasswordS() && student.getNameS() == studentsList[i]->getNameS())
		{
			cout << "Student " << student.getNameS() << " successfuly logged in!" << endl;
			return true;
		}
	}
	return false;
}


bool App::log_in_teach(Teacher&teacher)
{
	for (int i = 0; i < teacherList.size(); i++)
	{
		if (teacher.getPasswordT() == teacherList[i]->getPasswordT() && teacher.getNameT() == teacherList[i]->getNameT())
		{
			cout << "Teacher " << teacher.getNameT() << " successfuly logged in!" << endl;
			return true;
		}
	}
	return false;
}


void App::regist_student(Student&student)
{
	studentsList.push_back(&student);
	cout << "Student " << student.getNameS() << " has created an account in the arApp successfuly!" << endl;
}

void App::regist_teacher(Teacher&teacher)
{
	teacherList.push_back(&teacher);
	cout << "Teacher " << teacher.getNameT() << " has created an account in the arApp successfuly!" << endl;
}


//getters
Student*App::getStudent(int index)
{
	return studentsList[index];
}

Teacher*App::getTeacher(int index)
{
	return teacherList[index];
}

VirtualMaterial*App::getCatalog(int index)
{
	return catalog[index];
}

MaterialCreator*App::getMaterialCreator(int index)
{
	return materialCreator[index];
}


App App::operator=(App arApp)
{
	teacherList = arApp.teacherList;
	studentsList = arApp.studentsList;
	catalog = arApp.catalog;
	materialCreator = arApp.materialCreator;
	return *this;
}

istream& operator>>(istream& is, App& arApp)
{
	arApp.studentsList.clear();
	arApp.teacherList.clear();
	arApp.catalog.clear();
	arApp.materialCreator.clear();
	char key = 'y';
	int s = 0;
	do{
		Student*st = new Student();
		arApp.regist_student(*st);
        is >> *(arApp.studentsList[s++]);
		cout << "Do you want to add one more student? [y/n]: "; cin >> key;
	} while (key != 'n');
	
	int t = 0;
	do{
		Teacher*tch = new Teacher();
		arApp.regist_teacher(*tch);
		is >> *(arApp.teacherList[t++]);
		cout << "Do you want to add one more teacher? [y/n]: "; cin >> key;
	} while (key != 'n');
	int m = 0;
	do{
		VirtualMaterial*mat = new VirtualMaterial();
		arApp.catalog.push_back(mat);
		is >> *(arApp.catalog[m++]);
		cout << "Do you want to add one more virtual material? [y/n]: "; cin >> key;
	} while (key != 'n');
	int c = 0;
	do{
		MaterialCreator*cr = new MaterialCreator();
		arApp.materialCreator.push_back(cr);
		is >> *(arApp.materialCreator[c++]);
		cout << "Do you want to add one more material creator? [y/n]: "; cin >> key;
	} while (key != 'n');

	return is;
}


ostream& operator<<(ostream& os, const App& arApp)
{
	cout << "Students: " << endl;
	for (int i = 0; i < arApp.studentsList.size(); i++)
	{
		os << *(arApp.studentsList[i]);
	}
	cout << "Teachers: " << endl;
	for (int i = 0; i < arApp.teacherList.size(); i++)
	{
		os << *(arApp.teacherList[i]);
	}
	cout << "Catalog of virtual materials: " << endl;
	for (int i = 0; i < arApp.catalog.size(); i++)
	{
		os << *(arApp.catalog[i]);
	}
	cout << "VirtualMaterial creators: " << endl;
	for (int i = 0; i < arApp.materialCreator.size(); i++)
	{
		os << *(arApp.materialCreator[i]);
	}
	return os;
}

