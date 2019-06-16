#if !defined(__ClassDiagram_1_Student_h)
#define __ClassDiagram_1_Student_h
#include<string>
#include<iostream>
class App;

using namespace std;
class Teacher;
class VirtualMaterial;
class Student
{

public:
   int write_test(Teacher&);
   void do_practice(VirtualMaterial&);
   //constructors, destructor
   Student();
   Student(string, string, string);
   Student(const Student&);
   ~Student();
   //getters, setters
   inline string getNameS();
   void setNameS(string);
   inline string getPasswordS();
   void setPasswordS(string);
   inline string getGroupName();
   void setGroupName(string);
   //Operators of overload
   Student operator=(Student);
   friend istream& operator>>(istream &, Student &);
   friend ostream& operator<<(ostream &, const Student &);

protected:
private:
   std::string nameS;
   std::string passwordS;
   std::string groupName;
};
//getters
inline string Student::getNameS()
{
	return nameS;
}
inline string Student::getPasswordS()
{
	return passwordS;
}
inline string Student::getGroupName()
{
	return groupName;
}
#endif
