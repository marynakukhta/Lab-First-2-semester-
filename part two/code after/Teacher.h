

#if !defined(__ClassDiagram_1_Teacher_h)
#define __ClassDiagram_1_Teacher_h
#include<string>
#include<iostream>
#include <vector>
#include "MaterialCreator.h"
#include "Student.h"
using namespace std;
class MaterialCreator;
class Student;
class Teacher
{
	friend void MaterialCreator::watch_presentation(Teacher &);
	friend int Student::write_test(Teacher&);
public:
	string make_test(void);
	void run_test(void);
	string make_presentation(void);
	//constructors, destructors
   Teacher();
   Teacher(string, string, string, vector<string>);
   Teacher(const Teacher&);
   ~Teacher();
   //getters, setters
   inline string getNameT();
   void setNameT(string);
   inline string getPasswordT();
   void setPasswordT(string);
   inline string getSubjectName();
   void setSubjectName(string);
   inline string getGroups(int);
   void setGroups(string);
   //Operators of overload
   Teacher operator=(Teacher);
   friend istream& operator>>(istream &, Teacher &);
   friend ostream& operator<<(ostream &, const Teacher &);
protected:
private:
   string nameT;
   string passwordT;
   string subjectName;
   vector <string> groups;
};
//getters
inline string Teacher::getNameT()
{
	return nameT;
}
inline string Teacher::getPasswordT()
{
	return passwordT;
}
inline string Teacher::getSubjectName()
{
	return subjectName;
}
inline string Teacher::getGroups(int i)
{
	return groups[i];
}
#endif
