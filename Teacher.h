#if !defined(__ClassDiagram_1_Teacher_h)
#define __ClassDiagram_1_Teacher_h
#include<string>
#include<iostream>
#include <vector>

using namespace std;
class Teacher
{
public:
	void make_test(void);
	void run_test(void);
	void make_presentation(void);
	//constructors, destructors
   Teacher();
   Teacher(string, string, string, vector<string>);
   Teacher(const Teacher&);
   ~Teacher();
   //getters, setters
   string getNameT();
   void setNameT(string);
   string getPasswordT();
   void setPasswordT(string);
   string getSubjectName();
   void setSubjectName(string);
   string getGroups(int);
   void setGroups(string);

protected:
private:
   string nameT;
   string passwordT;
   string subjectName;
   vector <string> groups;
};

#endif
