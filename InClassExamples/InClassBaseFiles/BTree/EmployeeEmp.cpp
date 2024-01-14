#include "EmployeeEmp.h"



EmployeeEmp::EmployeeEmp(int empId, string empName)
{
	this->empID = empId;
	this->empName = empName;
}


EmployeeEmp::~EmployeeEmp()
{
}

bool EmployeeEmp::operator<(EmployeeEmp & obj)
{
	bool result = false;

	if (empID < obj.empID)
		result = true;

	return result;
}

bool EmployeeEmp::operator==(EmployeeEmp & obj)
{
	bool result = false;

	if (empID == obj.empID && empName == obj.empName)
		result = true;

	return result;
}

ostream & operator<<(ostream & strm, const EmployeeEmp & obj)
{
	strm << "Emp ID: " << obj.empID << endl;
	strm << "Emp Name: " << obj.empName << endl;

	return strm;
}
