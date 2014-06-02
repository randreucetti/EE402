#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student:public Person
{
    public:
        Student(string);
        Student(const Student&);
        virtual void display();

};

#endif // STUDENT_H
