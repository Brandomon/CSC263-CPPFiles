#ifndef CORPORATESALESHEADER_H_INCLUDED
#define CORPORATESALESHEADER_H_INCLUDED

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

struct Division
{
    string  name;
    double  q1;
    double  q2;
    double  q3;
    double  q4;
    double  annual;
    double  average;
};

void GetDivisionSales(Division& div);
void FindTotalAndAverageSales(Division& div);
void DisplayCorpInformation(const Division& north, const Division& east, const Division& west, const Division& south);

#endif // CORPORATESALESHEADER_H_INCLUDED
