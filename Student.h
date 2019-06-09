#if !defined(__ClassDiagram_1_Student_h)
#define __ClassDiagram_1_Student_h
#include<string>
#include<iostream>
class App;

using namespace std;

class Student
{
public:
   int write_test(void);
   void do_practice(void);
   //constructors, destructor
   Student();
   Student(string, string, string);
   Student(const Student&);
   ~Student();
   //getters, setters
   string getNameS();
   void setNameS(string);
   string getPasswordS();
   void setPasswordS(string);
   string getGroupName();
   void setGroupName(string);
protected:
private:
   std::string nameS;
   std::string passwordS;
   std::string groupName;
};

#endif
