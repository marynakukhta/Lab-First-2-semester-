#include <iostream>
#include <string> 
#include "MaterialCreator.h"

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

////////////////////////////////////////////////////////////////////////
// Name:       TechicalSpecialist::create_virtual_material()
// Purpose:    Implementation of TechicalSpecialist::create_virtual_material()
// Return:     void
////////////////////////////////////////////////////////////////////////

VirtualMaterial*MaterialCreator::create_virtual_material(void)
{
	return 0;
	// TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       TechicalSpecialist::watch_presentation()
// Purpose:    Implementation of TechicalSpecialist::watch_presentation()
// Return:     void
////////////////////////////////////////////////////////////////////////

void MaterialCreator::watch_presentation()
{
	// TODO : implement
}
//setter
void MaterialCreator::setTypeOfSpecialisation(string type)
{
	typeOfSpecialisation = type;
	cout << "MaterialCreator's type of specialisation was setted as " << typeOfSpecialisation << endl;
}
//getter
string MaterialCreator::getTypeOfSpecialisation()
{
	return typeOfSpecialisation;
}
