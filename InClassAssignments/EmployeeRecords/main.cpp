#include "Employee.h"

using namespace std;

void DisplayEmp(Employee* emp)
{
    cout << setw(COL_WID) << emp->GetName() <<
            setw(COL_WID) << emp->GetID() <<
            setw(COL_WID) << emp->GetDepartment() <<
            setw(COL_WID) << emp->GetPosition() << endl << endl;
}

int main()
{
    Employee emp1;
    Employee emp2("Brandon LaPointe", 700195);
    Employee* emp3 = new Employee("Mary Jane", 420710, "Accounting", "Bean Counter");

    DisplayEmp(&emp1);
    DisplayEmp(&emp2);
    DisplayEmp(emp3);

    emp1.SetDepartment("IT");
    emp1.SetPosition("Network Admin");
    emp1.SetName("Lisa Smith");
    emp1.SetID(543626);

    emp2.SetDepartment("Main Office");
    emp2.SetPosition("Head Honcho");

    cout << left << setw(COL_WID) << "Name" <<
                    setw(COL_WID) << "ID Number" <<
                    setw(COL_WID) << "Department" <<
                    setw(COL_WID) << "Position" << endl << endl;
    cout << setfill('-');
    cout << setw(COL_WID * 4) << "-" << endl;
    cout << setfill(' ');

    DisplayEmp(&emp1);
    DisplayEmp(&emp2);
    DisplayEmp(emp3);

    emp1.DisplayEmp();
    emp2.DisplayEmp();
    emp3->DisplayEmp();

    delete emp3;    //destructor
    return 0;
}
