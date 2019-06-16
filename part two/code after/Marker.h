
#if !defined(__ClassDiagram_1_Marker_h)
#define __ClassDiagram_1_Marker_h
#include<string>
#include<iostream>
using namespace std;
class Marker
{
public:
   bool virtual scan_marker(void);
   //constructors, destructor
   ~Marker();
   Marker();
   Marker(string);
   Marker(const Marker&);
   //getters, setters
   inline string getNameMarker();
   void setNameMarker(string);
   //Operators of overload
   Marker operator=(Marker);
   friend istream& operator>>(istream &, Marker &);
   friend ostream& operator<<(ostream &, const Marker &);
   friend bool operator ==(Marker &, Marker &);
   friend bool operator !=(Marker &, Marker &);
   friend bool operator >(Marker &, Marker &);
   friend bool operator <(Marker &, Marker &); 
protected:
private:
   string nameMarker;
};
//getter
inline string Marker::getNameMarker()
{
	return this->nameMarker;
}
#endif
