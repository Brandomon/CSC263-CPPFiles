#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include<iostream>
#include<iomanip>
using namespace std;

class Person
{
    public:
        Person(string firstName, string lastName, string phoneNumber);
        void DisplayPerson();


    private:
        string firstName;
        string lastName;
        string phoneNumber;
};

#endif // PERSON_H_INCLUDED
