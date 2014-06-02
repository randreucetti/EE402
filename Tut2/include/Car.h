#ifndef CAR_H
#define CAR_H

#include <Vehicle.h>
using std::ostream;

class Car: public Vehicle
{
    protected:
        int seats;
    public:
        Car(string aColor,string aMake,string aModel, int numSeats);
        ~Car();
        virtual void display();
        friend ostream &operator<<(ostream &stream, Car c);
};

#endif // CAR_H
