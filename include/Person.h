#ifndef PERSON_H
#define PERSON_H


class Person
{
    private:
        long identity;

    public:
        Person();
        Person(long id);
        ~Person();
        void setId(long id);
        long getId() const;
};

#endif // PERSON_H
