#ifndef PROCEDURE_H
#define PROCEDURE_H

#include <iostream>
#include <iomanip>
using namespace std;

class Procedure
{
    public:
        Procedure(string procedureName, string date, string doctor, double charge);
        void DisplayInfo();
        bool operator>(const Procedure& obj);

    private:
        string procedureName;
        string date;
        string doctor;
        double charge;
};

#endif // PROCEDURE_H
