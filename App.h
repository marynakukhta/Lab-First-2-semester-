#if !defined(__ClassDiagram_1_App_h)
#define __ClassDiagram_1_App_h

#include<string>
#include<iostream>
#include <vector>
#include "Student.h"

class Student;
class Teacher;
class MaterialCreator;
class Marker;
class VirtualMaterial;

using namespace std;

class App
{
public:
	void send_message(void);
	void view_catalog(void);
	void show_virtual_material();
	bool log_in();
	void regist();
	void read_message(void);
	
   App();//default
   App(Student*,Teacher*,VirtualMaterial*,MaterialCreator*);//initialisation
   App(const App&);//copy
   ~App();
   //getters
   Student*getStudent(int);
   Teacher*getTeacher(int);
   VirtualMaterial*getCatalog(int);
   MaterialCreator*getMaterialCreator(int);

protected:
private:
   vector<VirtualMaterial*>catalog;
   vector<Student*>studentsList;
   vector<Teacher*>teacherList;
   vector<MaterialCreator*>materialCreator;
};

#endif
