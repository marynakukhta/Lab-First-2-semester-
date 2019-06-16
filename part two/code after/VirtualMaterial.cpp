#include <iostream>
#include <string> 
#include <locale>
#include "VirtualMaterial.h"
#include <sstream>

VirtualMaterial::VirtualMaterial() :name("name of VirtualMaterial by default"), info("teoretical information about this sceleton by default"), animation_duration_sec(3)
{
	cout << "VirtualMaterial was created with default constructor" << endl;
}

VirtualMaterial::VirtualMaterial(string n, string i, int t) : name(n), info(i), animation_duration_sec(t)
{
	cout << "VirtualMaterial was created with constructor of initialisation" << endl;
}

VirtualMaterial::VirtualMaterial(const VirtualMaterial &object) : name(object.name), info(object.info), animation_duration_sec(object.animation_duration_sec)
{
	cout << "VirtualMaterial was created with constructor of copy" << endl;
}

VirtualMaterial::~VirtualMaterial()
{
	cout << "VirtualMaterial was destroyed" << endl;
}


void VirtualMaterial::play_animation(void)
{
	cout << "Animation of virtual object "<<name<<" with duration " << animation_duration_sec << " seconds was played" << endl;
}



void VirtualMaterial::rotate_object(void)
{
	cout << "Virtual object " << name << " was rotated" << endl;
}



void VirtualMaterial::move_object(void)
{
	cout << "Virtual object " << name << " was moved" << endl;
}


void VirtualMaterial::scale_object(void)
{
	cout << "Virtual object " << name << " was scaled" << endl;
}
//setters
void VirtualMaterial::setName(string virtualMaterial)
{
	name = virtualMaterial;
	cout << "VirtualMaterial name was setted as " << name << endl;
}

void VirtualMaterial::setInfo(string virtualInfo)
{
	info = virtualInfo;
	cout << "Virtual Material info was setted as " << info << endl;
}

void VirtualMaterial::setAnimationTime(int animation_duration)
{
		animation_duration_sec = animation_duration;
		cout << "animation_duration was setted as " << animation_duration_sec << endl;
}

VirtualMaterial& VirtualMaterial::operator++()// prefix increment operator.  
{
	cout << "++prefix: ";
	animation_duration_sec++;
	return *this;
}

VirtualMaterial VirtualMaterial::operator++(int)// postfix increment operator.  
{
	cout << "postfix ++: ";
	VirtualMaterial temp = *this;
	this->animation_duration_sec++;
	return temp;
}

VirtualMaterial& VirtualMaterial::operator--()//prefix decrement operator.  
{
	cout << "--prefix: ";
	animation_duration_sec--;
	return *this;
}

VirtualMaterial VirtualMaterial::operator--(int)//postfix decrement operator. 
{
	cout << "postfix--: ";
	VirtualMaterial temp = *this;
	this->animation_duration_sec--;
	return temp;
}

VirtualMaterial VirtualMaterial::operator=(VirtualMaterial material)
{
	name = material.name;
	info = material.info;
	animation_duration_sec = material.animation_duration_sec;
	return *this;
}

istream& operator>>(istream& is, VirtualMaterial& material)
{
	cout << "Virtual material name: "; is >> material.name;
	cout << "Virtual material info: "; is >> material.info;
	cout << "Virtual material animation duration: "; is >> material.animation_duration_sec;
	return is;

}


ostream& operator<<(ostream& os, const VirtualMaterial& material)
{
	os << "Virtual Material name: " << material.name << endl << "Virtual Material info: " << material.info << endl << "Virtual Material animation duration: " << material.animation_duration_sec << endl;
	return os;
}

VirtualMaterial operator +(const VirtualMaterial &a, const VirtualMaterial &b)
{
	return VirtualMaterial(a.name + b.name,a.info+b.info,a.animation_duration_sec+b.animation_duration_sec);
}
