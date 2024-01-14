#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int COL_WID = 20;

class Employee
{
    private:
        string name;
        string department;
        string position;
        int empID;
        int* rate;

    public:
        Employee();
        Employee(string name, int empID, string department, string position);
        Employee(string name, int empID);
        ~Employee();
        void SetName(string name);
        void SetDepartment(string department);
        void SetPosition(string position);
        void SetID(int empID);
        string GetName() const;
        string GetDepartment() const;
        string GetPosition() const;
        int GetID() const;
        void DisplayEmp();
      //void DisplayEmpP() {DisplayEmp();}  //Inline function
};

#endif // EMPLOYEE_H_INCLUDED
