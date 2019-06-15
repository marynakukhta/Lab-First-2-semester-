#if !defined(__ClassDiagram_1_VirtualMaterial_h)
#define __ClassDiagram_1_VirtualMaterial_h
#include<string>
#include<iostream>
using namespace std;
class VirtualMaterial
{
public:

   void play_animation(void);
   void rotate_object(void);
   void move_object(void);
   void scale_object(void);

   //Constructors, destructor
   VirtualMaterial();
   VirtualMaterial(string, string, int);
   VirtualMaterial(const VirtualMaterial&);
   ~VirtualMaterial();
   //Getters-setters
   string getName();
   void setName(string);
   string getInfo();
   void setInfo(string);
   int getAnimationTime();
   void setAnimationTime(int);
  
protected:
private:
   std::string name;
   std::string info;
   int animation_duration_sec;
};
#endif
