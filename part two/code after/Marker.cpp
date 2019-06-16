
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


bool Marker::scan_marker()
{
	cout << "Marker was successfully scanned!" << endl;
	return 1;
}

//setter
void Marker::setNameMarker(string name)
{
	nameMarker = name;
	cout << "NameMarker was setted as " << nameMarker << endl;
}

Marker Marker::operator=(Marker marker)
{
	nameMarker = marker.nameMarker;
	return *this;
}

istream& operator>>(istream& is, Marker& marker)
{	cout << "Marker name: "; is >> marker.nameMarker;
	return is;
}


ostream& operator<<(ostream& os, const Marker& marker)
{
	os << "Marker name: " << marker.nameMarker << endl;
	return os;
}

bool operator == (Marker &m1, Marker &m2)
{
	if (m1.nameMarker == m2.nameMarker) 
	{
		cout << "objects of clas Marker " << m1.nameMarker << " >= " << m2.nameMarker << "equal!" << endl;
		return 1;
	}
	else
		cout << "objects of clas Marker " << m1.nameMarker << " >= " << m2.nameMarker << "not equal!" << endl;
	return 0;
}

bool operator != (Marker &m1, Marker &m2)
{
	if (m1.nameMarker != m2.nameMarker)
	{
		cout << "object of clas Marker " << m1.nameMarker << " >= " << m2.nameMarker << "not equal!" << endl;
		return 1;
	}
	else
	{
		cout << "object of clas Marker " << m1.nameMarker << " >= " << m2.nameMarker << "equal!" << endl;
		return 0;
	}
	
}
bool operator > (Marker &m1, Marker &m2)
{
	if (m1.nameMarker > m2.nameMarker)
	{
		cout << "object of clas Marker " << m1.nameMarker << " larger than class object Marker" << m2.nameMarker << endl;
		return 1;
	}
	else
	{
		cout << "object of clas Marker " << m1.nameMarker << " less than class object Marker " << m2.nameMarker << endl;
		return 0;
	} 
}
bool operator < (Marker &m1, Marker &m2)
{
	if (m1.nameMarker < m2.nameMarker)
	{
		cout << "object of clas Marker " << m1.nameMarker << " less than class object Marker " << m2.nameMarker << endl;
		return 1;
	}
	else
	{
		cout << "object of clas Marker " << m1.nameMarker << " larger than class object Marker" << m2.nameMarker << endl;
        return 0;
	}
}
