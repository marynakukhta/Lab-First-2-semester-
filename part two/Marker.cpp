#include <iostream>
#include <string> 
#include "Marker.h"

Marker::Marker():nameMarker("Earth")
{
	cout << "Marker was created with default constructor" << endl;
}

Marker::Marker(string a) : nameMarker(a)
{
	cout << "Marker was created with constructor of initialisation" << endl;
}

Marker::Marker(const Marker &object) : nameMarker(object.nameMarker)
{
	cout << "Marker was created with constructor of copy" << endl;
}

Marker::~Marker()
{
	cout << "Marker was destroyed" << endl;
}

////////////////////////////////////////////////////////////////////////
// Name:       Marker::scan_marker()
// Purpose:    Implementation of Marker::scan_marker()
// Return:     bool
////////////////////////////////////////////////////////////////////////

bool Marker::scan_marker()
{
	return 1;
}
//setter
void Marker::setNameMarker(string name)
{
	nameMarker = name;
	cout << "NameMarker was setted as " << nameMarker << endl;
}
//getter
string Marker::getNameMarker()
{
	return this->nameMarker;
}
