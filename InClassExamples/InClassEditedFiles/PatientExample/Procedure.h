#ifndef PROCEDURE_H_INCLUDED
#define PROCEDURE_H_INCLUDED

#include <iostream>
using namespace std;


class Procedure
{
    public:
        Procedure(string procedureName, string date, string doctor, double charge);
        void DisplayInfo();

    private:
        string procedureName;
        string date;
        string doctor;
        double charge;
};

#endif // PROCEDURE_H_INCLUDED
