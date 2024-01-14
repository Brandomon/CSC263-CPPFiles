#include "Payroll.h"

void DisplayInformation(const Payroll empPay[], int size)
{
    cout << fixed << showpoint << setprecision(2) << endl << endl;

    cout << setw(10) << "Emp ID" << setw(10) << "Hours"
         << setw(15) << "Pay Rate" << setw(15) << "Gross Pay" << endl;

    for(int index = 0; index < size; index++)
    {
        cout << setw(10) << empPay[index].id
             << setw(10) << empPay[index].hours
             << setw(15) << empPay[index].payRate
             << setw(15) << empPay[index].wages
             << endl;
    }
}

void GetPayInformation(Payroll empPay[], int size)
{
    for(int index = 0; index < size; index++)
    {
        cout << "Enter employee ID : ";
        cin >> empPay[index].id;

        cout << "Enter the hours worked for employee ID " << empPay[index].id << " : ";
        cin >> empPay[index].hours;

        cout << "Enter the pay rate for employee ID " << empPay[index].id << " : ";
        cin >> empPay[index].payRate;
    }
}

void CalculateGrossPay(Payroll empPay[], int size)
{
    for(int index = 0; index < size; index++)
    {
        empPay[index].wages = empPay[index].hours * empPay[index].payRate;
    }
}
