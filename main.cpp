#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    Student student1(10001, 1.5);
    student1.print();

    cout << endl << endl;

    student1.setId(10002);
    student1.setGPA(2.9);
    student1.print();
    return 0;
}
