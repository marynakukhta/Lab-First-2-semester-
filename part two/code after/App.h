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
	void view_catalog(void);
	bool log_in_stud(Student&);
	bool log_in_teach(Teacher&);
	void regist_student(Student&);
	void regist_teacher(Teacher&);
   App();//default
   App(Student*,Teacher*,VirtualMaterial*,MaterialCreator*);//initialisation
   App(const App&);//copy
   ~App();
   //getters
   Student*getStudent(int);
   Teacher*getTeacher(int);
   VirtualMaterial*getCatalog(int);
   MaterialCreator*getMaterialCreator(int);
   //Operators of overload
   App operator=(App);
   friend istream& operator>>(istream &, App &);
   friend ostream& operator<<(ostream &, const App &);
protected:
private:
   vector<VirtualMaterial*>catalog;
   vector<Student*>studentsList;
   vector<Teacher*>teacherList;
   vector<MaterialCreator*>materialCreator;
};

#endif
