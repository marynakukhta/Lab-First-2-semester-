#if !defined(__ClassDiagram_1_MaterialCreator_h)
#define __ClassDiagram_1_MaterialCreator_h
class VirtualMaterial;

#include<string>
#include<iostream>
#include "VirtualMaterial.h"
using namespace std;

class MaterialCreator
{
public:
   VirtualMaterial*create_virtual_material(void);
   void watch_presentation(void);
   //constructors,destructor
   MaterialCreator();
   MaterialCreator(string);
   MaterialCreator(const MaterialCreator&);
   ~MaterialCreator();
   //getters, setters
   string getTypeOfSpecialisation();
   void setTypeOfSpecialisation(string);
protected:
private:
   std::string typeOfSpecialisation;
};

#endif
