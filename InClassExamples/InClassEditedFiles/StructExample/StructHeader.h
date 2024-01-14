#ifndef STRUCTHEADER_H_INCLUDED
#define STRUCTHEADER_H_INCLUDED

#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

struct EmployeeInfo
{
    string  name;
    int     id;
    int     ssn;
    char    gender;
    float   hourlyWage;
    float   hoursWorked;
};

void InputEmpInfo(EmployeeInfo& emp);
#endif // STRUCTHEADER_H_INCLUDED
