#if !defined(__ClassDiagram_1_FrameMarker_h)
#define __ClassDiagram_1_FrameMarker_h
#include<string>
#include<iostream>
#include "Marker.h"
#include <string>
using namespace std;
class FrameMarker:public Marker
{
public:

	bool scan_marker();
	//constructors, destructor
	~FrameMarker();
	FrameMarker();
	FrameMarker(int s);
	FrameMarker(int s, string name);
	FrameMarker(const FrameMarker&);
	//getters, setters
	inline int getFrameMarkerSize();
	void setFrameMarkerSize(int);

protected:
private:
	int sizeMarker;
};
//getter
inline int FrameMarker::getFrameMarkerSize()
{
	return this->sizeMarker;
}
#endif
