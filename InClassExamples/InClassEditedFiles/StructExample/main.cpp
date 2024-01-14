#include "StructHeader.h"

const int NAME_COL = 20;
const int ID_COL = 10;

int main()
{
    EmployeeInfo emp1;
    EmployeeInfo emp2;

    emp1.name = "Richard Specioso";
    emp1.id = 1234;

    InputEmpInfo(emp2);

    cout << setw(NAME_COL) << left      //Left justified works for each following cout
         << "Employee Name" << endl;
    cout << setw(NAME_COL) << emp1.name
         << setw(ID_COL) << emp1.id << endl;
    cout << setw(NAME_COL) << emp2.name
         << setw(ID_COL) << emp2.id << endl;

    return 0;
}
