#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(string aColor, string aMake, string aModel,int numSeats)
:Vehicle(aColor,aMake,aModel), seats(numSeats)
{
    cout << "A car has been created." << endl;
}

Car::~Car()
{
    cout << "A car has been destroyed." << endl;
}

void Car::display()
{
    cout << "This is a " << color << " " << make << " " << model << " with " << seats << " seats and reg : " << regNum << "." << endl;
}
ostream &operator<<(ostream &stream, Car c)
{
    stream << c.color << " : " << c.make << " : " << c.model << " : " << c.seats << " seats" ;
    return stream;
}



