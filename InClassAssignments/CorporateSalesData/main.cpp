#include "CorporateSalesHeader.h"

int main()
{
    //initiate each structure of Division
    Division div1;
    Division div2;
    Division div3;
    Division div4;

    //name each corporate division
    div1.name = "North";
    div2.name = "East";
    div3.name = "West";
    div4.name = "South";

    //have user input all division sales data
    GetDivisionSales(div1);
    GetDivisionSales(div2);
    GetDivisionSales(div3);
    GetDivisionSales(div4);

    //calculate annual total and average for each division
    FindTotalAndAverageSales(div1);
    FindTotalAndAverageSales(div2);
    FindTotalAndAverageSales(div3);
    FindTotalAndAverageSales(div4);

    //display all information
    DisplayCorpInformation(div1, div2, div3, div4);

    return 0;
}
