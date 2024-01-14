#include "Patient.h"

Patient::Patient(string firstName, string lastName, string address,
                string city, string state, string zip, string phoneNumber,
                string erFirstName, string erLastName, string erPhoneNumber)
{
    myAddress = new Address(address, city, state, zip);
    myPerson = new Person(firstName, lastName, phoneNumber);
    erContact = new Person(erFirstName, erLastName, erPhoneNumber);
}

Patient::~Patient()
{
    delete myAddress;
    delete myPerson;
    delete erContact;
}

void Patient::DisplayInfo()
{
    myPerson->DisplayPerson();
    myAddress->DisplayAddress();
    erContact->DisplayPerson();
}

