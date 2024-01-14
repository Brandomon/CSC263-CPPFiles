#include "Procedure.h"

Procedure::Procedure(string procedureName, string date, string doctor,
                     double charge)
{
    this->procedureName = procedureName;
    this->date  = date;
    this->doctor = doctor;
    this->charge = charge;
}

void Procedure::DisplayInfo()
{
    cout << "Procedure Name: " << procedureName << endl
         << "Procedure Date: " << date << endl
         << "Practitioner: " << doctor << endl
         << "Charges: " << charge << endl << endl;
}
