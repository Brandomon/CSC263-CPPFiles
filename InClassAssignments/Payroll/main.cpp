#include <iostream>
#include "Payroll.h"
using namespace std;

int main()
{
    Payroll empList[EMP_COUNT];

    GetPayInformation(empList, EMP_COUNT);

    CalculateGrossPay(empList, EMP_COUNT);

    DisplayInformation(empList, EMP_COUNT);

    return 0;
}
