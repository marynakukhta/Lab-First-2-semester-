#include "App.h"
#include "Marker.h"
#include "Student.h"
#include "Teacher.h"
#include "MaterialCreator.h"
#include "VirtualMaterial.h"
#include "FrameMarker.h"
#include "MarkerImage.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
    cout << ">>>>>Version 7<<<<<" << endl;
    system("START task.txt");
    cout << "Start\n" << endl;
    cout << "Default constructor:" << endl;
    App*arApp = new App();
    Marker*marker = new Marker();
    cout << "Exception" << endl;
    arApp->getStudent(0)->write_test(*arApp->getTeacher(0)); //студент пише тест, що створив викладач, якщо string test="", то exception
    cout << endl << "Deleting objects" << endl;
    delete arApp;
    delete marker;
    
    cout << endl;
    cout << "Finish\n";
    system("pause");
}


