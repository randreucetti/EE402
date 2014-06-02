#ifndef PERSON_H
#define PERSON_H


#include<iostream>
#include<string>

using namespace std;

class Person
{
    protected:
        string name;
        friend void clearName(Person &);
    public:
        Person(string);
        Person(const Person &);
        virtual bool operator == (Person);
        virtual void display();
};


#endif // PERSON_H
