#include "StructHeader.h"

void InputEmpInfo(EmployeeInfo& emp)
{
    cout << "Enter a name ";
    getline(cin, emp.name);
    //getline(cin, emp2.name, '&');     //Takes entire string until delimiter
    cout << "Enter ID ";
    cin >> emp.id;
}
