#include "EmployeeInfo.h"

int main()
{
    EmployeeInfo emp1;
    EmployeeInfo emp2(1234, "Brandon LaPointe");

    cout << emp1 << endl;
    cout << emp2 << endl;

    cin >> emp1;
    cin >> emp2;

    cout << emp1 << endl;
    cout << emp2 << endl;

    if(emp1 < emp2)
        cout << "Emp1 less than emp2" << endl;
    else
        cout << "Emp2 less than emp1" << endl;

    return 0;
}
