#if !defined(__ClassDiagram_1_Marker_h)
#define __ClassDiagram_1_Marker_h
#include<string>
#include<iostream>
using namespace std;
class Marker
{
public:
   bool scan_marker(void);
   //constructors, destructor
   ~Marker();
   Marker();
   Marker(string);
   Marker(const Marker&);
   //getters, setters
   string getNameMarker();
   void setNameMarker(string);

protected:
private:
   string nameMarker;
};

#endif
