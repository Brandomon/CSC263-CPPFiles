#include "Person.h"

Person::Person(string firstName, string lastName, string phoneNumber)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->phoneNumber = phoneNumber;
}

void Person::DisplayPerson()
{
    cout << setw(25) << "Patient Name: " << firstName
                     << " " << lastName << endl;
    cout << setw(25) << "Phone Number: " << phoneNumber << endl << endl;
}

void Person::DisplayEMContact()
{
    cout << setw(25) << "Emergency Contact: " << firstName
                     << " " << lastName << endl;
    cout << setw(25) << "Emergency Phone Number: " << phoneNumber << endl << endl;
}

void Person::SetFirstName(string name)
{
    firstName = name;
}
