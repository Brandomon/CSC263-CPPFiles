#include "CorporateSalesHeader.h"

const int COL = 13;

void GetDivisionSales(Division& div)
{
    cout << "Enter the sales for " << div.name << " division." << endl;
    cout << "Enter the Q1 sales : $";
    cin >> div.q1;
    cout << "Enter the Q2 sales : $";
    cin >> div.q2;
    cout << "Enter the Q3 sales : $";
    cin >> div.q3;
    cout << "Enter the Q4 sales : $";
    cin >> div.q4;
}
void FindTotalAndAverageSales(Division& div)
{
    div.annual = div.q1 + div.q2 + div.q3 + div.q4;
    div.average = div.annual / 4;
}
void DisplayCorpInformation(const Division& div1, const Division& div2, const Division& div3, const Division& div4)
{
    cout << "\n\n\n"
         << setw(COL) << "Division"
         << setw(COL) << "Quarter1"
         << setw(COL) << "Quarter2"
         << setw(COL) << "Quarter3"
         << setw(COL) << "Quarter4"
         << setw(COL) << "Total"
         << setw(COL) << "Average" << endl;
    cout << "--------------------------------------------" << endl;
    cout << setw(COL) << div1.name
         << setw(COL) << div1.q1
         << setw(COL) << div1.q2
         << setw(COL) << div1.q3
         << setw(COL) << div1.q4
         << setw(COL) << div1.annual
         << setw(COL) << div1.average << endl;
    cout << setw(COL) << div2.name
         << setw(COL) << div2.q1
         << setw(COL) << div2.q2
         << setw(COL) << div2.q3
         << setw(COL) << div2.q4
         << setw(COL) << div2.annual
         << setw(COL) << div2.average << endl;
    cout << setw(COL) << div3.name
         << setw(COL) << div3.q1
         << setw(COL) << div3.q2
         << setw(COL) << div3.q3
         << setw(COL) << div3.q4
         << setw(COL) << div3.annual
         << setw(COL) << div3.average << endl;
    cout << setw(COL) << div4.name
         << setw(COL) << div4.q1
         << setw(COL) << div4.q2
         << setw(COL) << div4.q3
         << setw(COL) << div4.q4
         << setw(COL) << div4.annual
         << setw(COL) << div4.average << endl;
}
