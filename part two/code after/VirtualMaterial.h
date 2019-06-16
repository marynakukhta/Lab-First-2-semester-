#if !defined(__ClassDiagram_1_VirtualMaterial_h)
#define __ClassDiagram_1_VirtualMaterial_h
#include<string>
#include<iostream>
#include "Student.h"

using namespace std;
class Student;
class VirtualMaterial
{
public:
   friend void Student::do_practice(VirtualMaterial&);
   void play_animation(void);
   void rotate_object(void);
   void move_object(void);
   void scale_object(void);

   //Constructors, destructor
   VirtualMaterial();
   VirtualMaterial(string, string, int);
   VirtualMaterial(const VirtualMaterial&);
   ~VirtualMaterial();
   //Getters-setters
   inline string getName();
   void setName(string);
   inline string getInfo();
   void setInfo(string);
   inline int getAnimationTime();
   void setAnimationTime(int);

   friend VirtualMaterial operator+(const VirtualMaterial &, const VirtualMaterial &);
   VirtualMaterial& operator++();       // Prefix increment operator.  
   VirtualMaterial operator++(int);     // Postfix increment operator.
   VirtualMaterial& operator--();       // Prefix decrement operator.  
   VirtualMaterial operator--(int);     // Postfix decrement operator.  
   VirtualMaterial operator=(VirtualMaterial);
   friend istream& operator>>(istream &, VirtualMaterial &);
   friend ostream& operator<<(ostream &, const VirtualMaterial &);
protected:
private:
   std::string name;
   std::string info;
   int animation_duration_sec;
};
//getters
inline string VirtualMaterial::getName()
{
	return name;
}
inline string VirtualMaterial::getInfo()
{
	return info;
}
inline int VirtualMaterial::getAnimationTime()
{
	return animation_duration_sec;
}
#endif
