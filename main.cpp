
#include "App.h"
#include "Marker.h"
#include "Student.h"
#include "Teacher.h"
#include "MaterialCreator.h"
#include "VirtualMaterial.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << ">>>>>Version 3<<<<<" << endl;
    system("START task.txt");
    cout << "Author: Kukhta Maryna Course: 2\n" << endl;
    cout << "Start\n" << endl;
    cout << "Default constructor:" << endl;
    Marker*marker = new Marker();
    App*arApp = new App();
    cout << endl;
    cout << "Setters:" << endl;
    marker->setNameMarker("Moon");
    arApp->getStudent(0)->setNameS("Anton Antonov");
    arApp->getStudent(0)->setPasswordS("jbh7v");
    arApp->getStudent(0)->setGroupName("IF-65");
    arApp->getTeacher(0)->setNameT("Favourite Teacher");
    arApp->getTeacher(0)->setPasswordT("nj7bh");
    arApp->getTeacher(0)->setSubjectName("Math");
    arApp->getTeacher(0)->setGroups("JI-41");
    arApp->getCatalog(0)->setName("Moon");
    arApp->getCatalog(0)->setInfo("Info about Moon");
    arApp->getCatalog(0)->setAnimationTime(11);
    arApp->getMaterialCreator(0)->setTypeOfSpecialisation("Animator");
    cout << endl << "Getters: " << endl;
    cout << "NameMarker: " << marker->getNameMarker() << endl;
    cout << "Student's name: " << arApp->getStudent(0)->getNameS() << endl;
    cout << "Student's password: " << arApp->getStudent(0)->getPasswordS() << endl;
    cout << "Student's groupName: " << arApp->getStudent(0)->getGroupName() << endl;
    cout << "Teacher's name: " << arApp->getTeacher(0)->getNameT() << endl;
    cout << "Teacher's password: " << arApp->getTeacher(0)->getPasswordT() << endl;
    cout << "Teacher's subjectName: " << arApp->getTeacher(0)->getSubjectName() << endl;
    cout << "Teacher's groups: " << arApp->getTeacher(0)->getGroups(0) << endl;
    cout << "VirtualMaterial name: " << arApp->getCatalog(0)->getName() << endl;
    cout << "VirtualMaterial info: " << arApp->getCatalog(0)->getInfo() << endl;
    cout << "VirtualMaterial duration of animation: " << arApp->getCatalog(0)->getAnimationTime() << endl;
    cout << "MaterialCreator type of specialisation: " << arApp->getMaterialCreator(0)->getTypeOfSpecialisation() << endl;
    cout << endl<<"Deleting objects" << endl;
    delete marker;
    delete arApp;
    cout << endl;
    cout << "Finish\n";
    system("pause");
}



void turn_on_app(string user)
{
    if (user!="")
    {
        cout << "Person with the name " << user << "has opened the ArApp successfully!" << endl;
        
    }
    else
    {
        cout << "Unfortunately there are some problems with opening the ArApp. Maybe the object doesn't exist." << endl;
    }
}


