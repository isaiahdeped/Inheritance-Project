#include "Person.h"
#include <cassert>

Person::Person()
:identity(0)
{}

Person::Person(long id)
:identity(id)
{
    assert (identity >= 10000 && identity <= 99999);
}

Person::~Person()
{
    //dtor
}

//Mutator member function
void Person::setId(long id) {
    identity = id;
}

//Accessor member function
long Person::getId() const {
    return identity;
}
