#ifndef PAYROLL_H_INCLUDED
#define PAYROLL_H_INCLUDED
#include <iostream>
#include <iomanip>

using namespace std;

const int EMP_COUNT = 2;

struct Payroll
{
        int id;
        int hours;
        double payRate;
        double wages;
};

void GetPayInformation(Payroll empPay[], int size);
void CalculateGrossPay(Payroll empPay[], int size);
void DisplayInformation(const Payroll empPay[], int size);

#endif // PAYROLL_H_INCLUDED
