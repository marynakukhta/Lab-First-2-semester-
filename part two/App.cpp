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

////////////////////////////////////////////////////////////////////////
// Name:       App::send_message()
// Purpose:    Implementation of App::send_message()
// Return:     void
////////////////////////////////////////////////////////////////////////

void App::send_message(void)
{
	// TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       App::view_catalog()
// Purpose:    Implementation of App::view_catalog()
// Return:     void
////////////////////////////////////////////////////////////////////////

void App::view_catalog(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       App::show_virual_material()
// Purpose:    Implementation of App::show_virual_material()
// Return:     void
////////////////////////////////////////////////////////////////////////

void App::show_virtual_material()
{
	// TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       App::log_in()
// Purpose:    Implementation of App::log_in()
// Return:     bool
////////////////////////////////////////////////////////////////////////

bool App::log_in()
{
	return true;
}

////////////////////////////////////////////////////////////////////////
// Name:       App::regist()
// Purpose:    Implementation of App::regist()
// Return:     void
////////////////////////////////////////////////////////////////////////

void App::regist()//ðåºñòðóâàòè â äîäàòêó
{
	// TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       App::read_message()
// Purpose:    Implementation of App::read_message()
// Return:     void
////////////////////////////////////////////////////////////////////////

void App::read_message(void)
{
	// TODO : implement
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
