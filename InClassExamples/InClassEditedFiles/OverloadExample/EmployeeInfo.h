#ifndef EMPLOYEEINFO_H_INCLUDED
#define EMPLOYEEINFO_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class EmployeeInfo
{
    public:
        EmployeeInfo(int empID, string empName);
        EmployeeInfo() {};
        bool operator<(const EmployeeInfo& right);
        friend ostream& operator<<(ostream& strm, const EmployeeInfo& obj);
        friend istream& operator>>(istream& strm, EmployeeInfo& obj);
    private:
        int empID;
        string empName;
};


#endif // EMPLOYEEINFO_H_INCLUDED
