#include "Student.h"
#include "iostream"
#include <cassert>

using namespace std;

Student::Student()
:Person(0), gpa(0.0)
{}

Student::Student(long id, double gp)
:Person(id), gpa(gp)
{
    assert (gpa >= 0.0 && gpa <= 4.0);
}

Student::~Student()
{
    //dtor
}

//Mutator member function
void Student::setGPA(double gp) {
    gpa = gp;
}

//Accessor member function
double Student::getGPA() const {
    return gpa;
}

void Student::print() const {
    cout << "identity: " << getId() << endl;
    cout << "GPA: " << gpa;
}
