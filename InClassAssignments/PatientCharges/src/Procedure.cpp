#include "Procedure.h"

Procedure::Procedure(string procedureName, string date, string doctor, double charge)
{
    this->procedureName = procedureName;
    this->date = date;
    this->doctor = doctor;
    this->charge = charge;
}

void Procedure::DisplayInfo()
{
    cout << setw(25) << "Procedure Name: " << procedureName << endl
         << setw(25) << "Procedure Date: " << date << endl
         << setw(25) << "Practitioner: " << doctor << endl
         << setw(25) << "Charge: " << "$" << fixed << setprecision(2) << charge << endl << endl;
}

bool Procedure::operator>(const Procedure& obj)
{
    bool result = false;

    if (this->charge > obj.charge)
        rseult = true;

    return result;
}
