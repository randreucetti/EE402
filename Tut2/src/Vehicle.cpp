#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle(string aColor,string aMake,string aModel)
{
    color = aColor;
    make = aMake;
    model = aModel;
    regNum = nextRegNum;
    nextRegNum++;
    cout << "A vehicle has been created." << endl;
}
Vehicle::~Vehicle()
{
    cout<< "A vehicle has been destroyed." << endl;
}
int Vehicle::nextRegNum=10000;
