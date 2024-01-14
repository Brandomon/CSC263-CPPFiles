#include "Person.h"

Person::Person(string firstName, string lastName, string phoneNumber)
{
   this->firstName = firstName;
   this->lastName = lastName;
   this->phoneNumber = phoneNumber;
}

void Person::DisplayPerson()
{
    cout << setw(15) << "Patient Name:" << setw(30) << firstName << " "
         << lastName << endl;
    cout << setw(15) << "Phone Number:" << setw(30) << phoneNumber << endl;
}
