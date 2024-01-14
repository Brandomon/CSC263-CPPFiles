#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>
#include <iomanip>
#include "Person.h"
#include "Address.h"
using namespace std;

class Patient
{
    public:
        Patient(string firstName, string lastName, string address,
                string city, string state, string zip, string phoneNumber,
                string erFirstName, string erLastName, string erPhoneNumber);
        ~Patient();
        void DisplayInfo();
        friend ostream& operator<<(ostream& stream, const Patient& obj); //(cout of the statement , Patient)
        friend istream& operator>>(istream& stream, Patient& obj);

    private:
        Address* myAddress;
        Person* myPerson;
        Person* erContact;
};

#endif // PATIENT_H
