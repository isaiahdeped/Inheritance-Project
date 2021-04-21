#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student:public Person
{
    private:
        double gpa;

    public:
        Student();
        Student(long id, double gp);
        ~Student();
        void setGPA(double gp);
        double getGPA() const;
        void print() const;
};

#endif // STUDENT_H
