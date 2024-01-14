#include "Employee.h"

Employee::Employee()
{
    this->name = "";
    this->empID = -1;       //indicate data was not set
    this->department = "";
    this->position = "";
    rate = new int[5];
}

Employee::Employee(string name, int empID, string department, string position)
{
    this->name = name;
    this->empID = empID;
    this->department = department;
    this->position = position;
}

Employee::Employee(string name, int empID)
{
    this->name = name;
    this->empID = empID;
    this->department = "";
    this->position = "";
}

void Employee::SetName(string name)
{
    this->name = name;
}

void Employee::SetDepartment(string department)
{
    this->department = department;
}

void Employee::SetPosition(string position)
{
    this->position = position;
}

void Employee::SetID(int empID)
{
    this->empID = empID;
}

string Employee::GetName() const
{
    return name;
}

string Employee::GetDepartment() const
{
    return department;
}

string Employee::GetPosition() const
{
    return position;
}

int Employee::GetID() const
{
    return empID;
}

void Employee::DisplayEmp()
{
    cout << setw(COL_WID) << GetName() <<
            setw(COL_WID) << GetID() <<
            setw(COL_WID) << department <<
            setw(COL_WID) << position << endl << endl;
}

Employee::~Employee()
{
    cout << "Deleting the object with a name of " << name << endl;
    delete [] rate;
}
