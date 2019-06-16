/***********************************************************************
 * Module:  MaterialCreator.h
 * Author:  Александра
 * Modified: 29 октября 2018 г. 22:33:58
 * Purpose: Declaration of the class MaterialCreator
 ***********************************************************************/

#if !defined(__ClassDiagram_1_MaterialCreator_h)
#define __ClassDiagram_1_MaterialCreator_h

#include<string>
#include<iostream>
#include "VirtualMaterial.h"

using namespace std;
class VirtualMaterial;
class Teacher;
class MaterialCreator
{
public:
   VirtualMaterial*create_virtual_material();
   void watch_presentation(Teacher&);
   //constructors,destructor
   MaterialCreator();
   MaterialCreator(string);
   MaterialCreator(const MaterialCreator&);
   ~MaterialCreator();
   //getters, setters
   inline string getTypeOfSpecialisation();
   void setTypeOfSpecialisation(string);
   //Operators of overload
   MaterialCreator operator=(MaterialCreator);
   friend istream& operator>>(istream &, MaterialCreator &);
   friend ostream& operator<<(ostream &, const MaterialCreator &);
protected:
private:
   std::string typeOfSpecialisation;
};
//getter
string MaterialCreator::getTypeOfSpecialisation()
{
	return typeOfSpecialisation;
}
#endif
