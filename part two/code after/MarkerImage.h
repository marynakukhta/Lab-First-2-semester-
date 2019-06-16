#if !defined(__ClassDiagram_1_MarkerImage_h)
#define __ClassDiagram_1_MarkerImage_h
#include<string>
#include<iostream>
#include "Marker.h"
using namespace std;
class MarkerImage:public Marker
{
public:

	bool scan_marker();
	bool detect_edges();
	bool treshhold();
	//constructors, destructor
	~MarkerImage();
	MarkerImage();
	MarkerImage(int);
	MarkerImage(int, string);
	MarkerImage(const MarkerImage&);
	//getters, setters
	inline int getMarkerImageFrame();
	void setMarkerImageFrame(int);

protected:
private:
	int frameWidth;
};
//getter
inline int MarkerImage::getMarkerImageFrame()
{
	return this->frameWidth;
}
#endif
