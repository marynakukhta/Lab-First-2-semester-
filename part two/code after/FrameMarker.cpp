#include <iostream>
#include <string> 
#include "FrameMarker.h"

FrameMarker::FrameMarker() :sizeMarker(4)
{
	cout << "FrameMarker was created with default constructor" << endl;
}

FrameMarker::FrameMarker(int a) : sizeMarker(a)
{
	cout << "FrameMarker was created with constructor of initialisation" << endl;
}

FrameMarker::FrameMarker(int a, string b) : Marker(b), sizeMarker(a)
{
	cout << "FrameMarker was created with constructor of initialisation (second variant)" << endl;
}

FrameMarker::FrameMarker(const FrameMarker &object) : sizeMarker(object.sizeMarker)
{
	cout << "FrameMarker was created with constructor of copy" << endl;
}


FrameMarker::~FrameMarker()
{
	cout << "FarmeMarker was destroyed" << endl;
}

void FrameMarker::setFrameMarkerSize(int size)
{
	sizeMarker = size;
	cout << "size of FrameMarker was setted as " << size << endl;
}

bool FrameMarker::scan_marker()
{
	if (sizeMarker >= 3 && sizeMarker <= 10)
	{
		cout << "The marker " << getNameMarker() << " was scanned successfully!" << endl;
		return true;
	}
	else
	{
		cout << "The marker " << getNameMarker() << " wasn't scanned successfully" << endl;
		return false;
	}
}