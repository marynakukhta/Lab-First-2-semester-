#include <iostream>
#include <string> 
#include "MarkerImage.h"

MarkerImage::MarkerImage() :frameWidth(4)
{
	cout << "MarkerImage was created with default constructor" << endl;
}

MarkerImage::MarkerImage(int a) : frameWidth(a)
{
	cout << "MarkerImage was created with constructor of initialisation" << endl;
}

MarkerImage::MarkerImage(int a, string b) : Marker(b), frameWidth(a)
{
	cout << "MarkerImage was created with constructor of initialisation (second variant)" << endl;
}

MarkerImage::MarkerImage(const MarkerImage &object) : frameWidth(object.frameWidth)
{
	cout << "MarkerImage was created with constructor of copy" << endl;
}

MarkerImage::~MarkerImage()
{
	cout << "MarkerImage was destroyed" << endl;
}

bool MarkerImage::treshhold()
{
	cout << "Treshholding is done successfully!" << endl;
	return true;
}

bool MarkerImage::detect_edges()
{
	cout << "Edge detecting is done successfuly!" << endl;
	return true;
}

void MarkerImage::setMarkerImageFrame(int width)
{
	frameWidth = width;
	cout << "Frame width of MarkerImage was setted as " << width << endl;
}

bool MarkerImage::scan_marker()
{
	if (treshhold() == true && detect_edges() == true)
	{
		cout << "The marker " << getNameMarker() << " was scanned successfully!" << endl;
		return true;
	}
	else
	{
		cout << "The marker " << getNameMarker() << " wasn't scanned successfully!" << endl;
		return false;
	}
}