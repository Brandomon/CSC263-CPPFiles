#ifndef PATIENT_H_INCLUDED
#define PATIENT_H_INCLUDED

#include <iostream>
#include <iomanip>
#include "Address.h"
#include "Person.h"

using namespace std;

class Patient
{
    public:
        Patient(string firstName, string lastName, string address,
                string city, string state, string zip, string phoneNumber,
                string erFirstName, string erLastName,string erPhoneNumber);
        ~Patient();
        void DisplayInfo();

    private:
        Address* myAddress;
        Person* myPerson;
        Person* erContact;
};

#endif // PATIENT_H_INCLUDED
