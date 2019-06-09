#include <iostream>
#include <string> 
#include "VirtualMaterial.h"

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

////////////////////////////////////////////////////////////////////////
// Name:       VirtualMaterial::play_animation()
// Purpose:    Implementation of VirtualMaterial::play_animation()
// Return:     void
////////////////////////////////////////////////////////////////////////

void VirtualMaterial::play_animation(void)
{
	// TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       VirtualMaterial::rotate_object()
// Purpose:    Implementation of VirtualMaterial::rotate_object()
// Return:     void
////////////////////////////////////////////////////////////////////////

void VirtualMaterial::rotate_object(void)
{
	// TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       VirtualMaterial::move_object()
// Purpose:    Implementation of VirtualMaterial::move_object()
// Return:     void
////////////////////////////////////////////////////////////////////////

void VirtualMaterial::move_object(void)
{
	// TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       VirtualMaterial::scale_object()
// Purpose:    Implementation of VirtualMaterial::scale_object()
// Return:     void
////////////////////////////////////////////////////////////////////////

void VirtualMaterial::scale_object(void)
{
	// TODO : implement
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
	cout << "VirtualMaterial animation time was setted as " << animation_duration_sec << endl;
}
//getters
string VirtualMaterial::getName()
{
	return name;
}
string VirtualMaterial::getInfo()
{
	return info;
}
int VirtualMaterial::getAnimationTime()
{
	return animation_duration_sec;
}
