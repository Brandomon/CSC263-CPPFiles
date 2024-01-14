#include "Patient.h"

Patient::Patient(string firstName, string lastName, string address,
                 string city, string state, string zip, string phoneNumber,
                 string erFirstName, string erLastName, string erPhoneNumber)
{
    myPerson = new Person(firstName, lastName, phoneNumber);
    myAddress = new Address(address, city, state, zip);
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
    myAddress->DisplayAddress();
    myPerson->DisplayPerson();
    erContact->DisplayEMContact();
}

ostream& operator<<(ostream& stream, const Patient& obj)
{
    obj.myPerson->DisplayPerson();
    obj.myAddress->DisplayAddress();
    obj.erContact->DisplayEMContact();

    return stream;
}

istream& operator>>(istream& stream, Patient& obj)
{
    string name;
    cout << "Enter first name ";
    stream >> name;
    obj.myPerson->SetFirstName(name);

    return stream;
}
