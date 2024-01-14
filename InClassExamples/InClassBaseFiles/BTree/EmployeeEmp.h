#pragma once
#include <string>
#include <iostream>
using namespace std;

class EmployeeEmp
{
    public:
        EmployeeEmp(int empId, string empName);
        EmployeeEmp() {};
        ~EmployeeEmp();
        bool operator<(EmployeeEmp& obj);
        bool operator==(EmployeeEmp& obj);
        friend ostream& operator<< (ostream& strm, const EmployeeEmp& obj);

    private:
        int empID;
        string empName;
};

