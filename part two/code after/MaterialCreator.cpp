#include <iostream>
#include <string> 
#include "MaterialCreator.h"
#include "Teacher.h"

MaterialCreator::MaterialCreator():typeOfSpecialisation("specialisation by default")
{
	cout << "MaterialCreator was created with default constructor" << endl;
}

MaterialCreator::MaterialCreator(string Specialisation) : typeOfSpecialisation(Specialisation)
{
	cout << "MaterialCreator was created with constructor of initialisation" << endl;
}

MaterialCreator::MaterialCreator(const MaterialCreator &object) : typeOfSpecialisation(object.typeOfSpecialisation)
{
	cout << "MaterialCreator was created with constructor of copy" << endl;
}

MaterialCreator::~MaterialCreator()
{
	cout << "MaterialCreator was destroyed" << endl;
}



VirtualMaterial*MaterialCreator::create_virtual_material()
{
	VirtualMaterial*temp = new VirtualMaterial();
	return temp;
}

//setter
void MaterialCreator::setTypeOfSpecialisation(string type)
{
	typeOfSpecialisation = type;
	cout << "MaterialCreator's type of specialisation was setted as " << typeOfSpecialisation << endl;
}

void MaterialCreator::watch_presentation(Teacher&teacher)//friend for class Teacher
{
	cout << "Material Creator watched presentation: " << teacher.make_presentation() << " that was created by the Teacher: "<<teacher.getNameT()<<endl;
}

MaterialCreator MaterialCreator::operator=(MaterialCreator creator)
{
	typeOfSpecialisation = creator.typeOfSpecialisation;
	return *this;
}

istream& operator>>(istream& is, MaterialCreator& creator)
{
	cout << "Material Creator's specialisation: "; is >> creator.typeOfSpecialisation;
	return is;
}


ostream& operator<<(ostream& os, const MaterialCreator& creator)
{
	os << "Material creator's type of specialisation: " << creator.typeOfSpecialisation << endl;
		return os;
}
