#include "Student.h"

Student::Student(string n):
Person(n){}

Student::Student(const Student &sourceStudent):
Person(sourceStudent){}

void Student::display()
{
    cout << "The students name is: " << name << endl;
}
