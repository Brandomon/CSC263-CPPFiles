#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <iomanip>
using namespace std;

class Person
{
    public:
        Person(string firstName, string lastName, string phoneNumber);
        void DisplayPerson();
        void DisplayEMContact();
        void SetFirstName(string name);

    private:
        string firstName;
        string lastName;
        string phoneNumber;
};

#endif // PERSON_H
