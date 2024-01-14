#include "EmployeeInfo.h"

EmployeeInfo::EmployeeInfo(int empID, string empName)
{
    this->empID = empID;
    this->empName = empName;
}

bool EmployeeInfo::operator<(const EmployeeInfo& right)
{
    bool result = false;

    if(empName > right.empName)
        result = true;

    return result;
}

ostream& operator<<(ostream& strm, const EmployeeInfo& obj)
{
    strm << "Name " << obj.empName << endl;
    strm << "Emp ID " << obj.empID << endl;
}

istream& operator>>(istream& strm, EmployeeInfo& obj)
{
    cout << "Enter your name ";
    getline(strm, obj.empName);
    cout << "Enter your ID ";
    strm >> obj.empID;
    strm.ignore();

    return strm;
}
