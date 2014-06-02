#include "Person.h"

#include<iostream>
#include<string>

using namespace std;

Person::Person(string n):
name(n)
{}

Person::Person(const Person &sourcePerson):
name(sourcePerson.name)
{}
bool Person::operator ==(Person sourcePerson)
{
    if(name==sourcePerson.name)
        return true;
    else
        return false;
}
void Person::display()
{
    cout << "The persons name is: "<<name<<endl;
}
void clearName(Person &sourcePerson)
{
    sourcePerson.name = "";
}

