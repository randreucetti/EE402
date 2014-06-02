#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using std::string;

class Vehicle
{
    protected:
        string color;
        string make;
        string model;
        int regNum;
        static int nextRegNum;
    public:
        Vehicle(string aColor,string aMake, string aModel);
        virtual void display() = 0;
        ~Vehicle();
        string getColor(){return color;}
        void setColor(string aColor){color = aColor;}
};

#endif // VEHICLE_H
