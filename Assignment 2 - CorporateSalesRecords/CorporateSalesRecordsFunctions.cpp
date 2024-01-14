#include "CorporateSalesRecords.h"

/************************************************************
* Function Name : GetTotal
* Description : Adds up all of the elements within the array
*               into total and returns total as a double.
* Initial Algorithm :
*   FOR each division within the array
*       FOR each quarter within the division
*           Add array element into total
*       END FOR qtrCount
*   END FOR divCount
*   Return total
************************************************************/

double GetTotal(double sales[DIVS][QTRS])
{
    //Local variables
    double total = 0.0;     //Total of all division sales for each quarter
    int divCount;           //Counter for divisions
    int qtrCount;           //Counter for quarters

    //FOR each division within the array
    for (divCount = 0; divCount < DIVS - 1; divCount++)
    {
        //FOR each quarter within the division
        for (qtrCount = 0; qtrCount < QTRS - 1; qtrCount++)
        {
            //Add array element into total
            total += sales[divCount][qtrCount];
        }//END FOR qtrCount
    }//END FOR divCount
    //Return total
    return total;
}

/************************************************************
* Function Name : GetAverage
* Description : Adds up all of the elements within the array
*               while counting how many elements to divide
*               the total by to get an average of all of the
*               array elements.
* Initial Algorithm :
*   FOR each division within the array
*       FOR each quarter within the division
*           Add array element into total
*           Increment divisor
*       END FOR qtrCount
*   END FOR divCount
*   Calculate average
*   Return average
************************************************************/

double GetAverage(double sales[DIVS][QTRS])
{
    double average = 0.0;   //Average of all division sales for each quarter
    double total = 0.0;     //Total of all division sales for each quarter
    int divisor = 0;        //Count of array elements to find average
    int divCount;           //Count for divisions
    int qtrCount;           //Count for quarters

    //FOR each division within the array
    for (divCount = 0; divCount < DIVS - 1; divCount++)
    {
        //FOR each quarter within the division
        for (qtrCount = 0; qtrCount < QTRS - 1; qtrCount++)
        {
            //Add array element into total
            total += sales[divCount][qtrCount];
            //Increment divisor
            divisor++;
        }//END FOR qtrCount
    }//END FOR divCount
    //Calculate average
    average = total/divisor;

    //Return average
    return average;
}

/************************************************************
* Function Name : GetRowTotal
* Description : Adds up all of the quarters within a
*               division specified by the integer parameter
*               before returning the division total.
* Initial Algorithm :
*   FOR each quarter within the specified division parameter
*       Add array element into rowTotal
*   END FOR qtrCount
*   Return rowTotal
************************************************************/

double GetRowTotal(double sales[DIVS][QTRS], int div)
{
    double rowTotal = 0.0;  //Total of all sales within the division
    int qtrCount;           //Count for quarters

    //FOR each quarter within the specified division parameter
    for (qtrCount = 0; qtrCount < QTRS - 1; qtrCount++)
    {
        //Add array element into rowTotal
        rowTotal += sales[div][qtrCount];
    }//END FOR qtrCount
    //Return rowTotal
    return rowTotal;
}

/************************************************************
* Function Name : GetColumnTotal
* Description : Adds up all of the divisions within a
*               quarter specified by the integer parameter
*               before returning the quarter total.
* Initial Algorithm :
*   FOR each division within the specified quarter parameter
*       Add array element into colTotal
*   END FOR divCount
*   Return colTotal
************************************************************/

double GetColumnTotal(double sales[DIVS][QTRS], int qtr)
{
    double colTotal = 0.0;  //Total of all sales within the quarter
    int divCount;           //Count for divisions

    //FOR each division within the specified quarter parameter
    for (divCount = 0; divCount < DIVS - 1; divCount++)
    {
        //Add array element to colTotal
        colTotal += sales[divCount][qtr];
    }//END FOR divCount
    //Return colTotal
    return colTotal;
}

/************************************************************
* Function Name : GetHighest
* Description : Compares each element of the array to retrieve
*               the highest sale, passes the div and qtr by
*               reference and returns the highest array element.
* Initial Algorithm :
*   FOR each division within the array
*       FOR each quarter within the division
*           IF array element is greater than highest
*               Set highest to new higher array element
*               Set div and qtr to pass by reference
*           END IF
*       END FOR qtrCount
*   END FOR divCount
*   Return highest
************************************************************/

double GetHighest(double sales[DIVS][QTRS], int& div, int& qtr)
{
    double highest = sales[0][0];   //Highest value within the sales array
    int divCount;                   //Count for divisions
    int qtrCount;                   //Count for quarters

    //FOR each division within the array
    for (divCount = 0; divCount < DIVS - 1; divCount++)
    {
        //FOR each quarter within the division
        for (qtrCount = 0; qtrCount < QTRS - 1; qtrCount++)
        {
            //IF array element is greater than highest
            if (sales[divCount][qtrCount] > highest)
            {
                //Set highest to new higher array element
                highest = sales[divCount][qtrCount];

                //Set div and qtr to pass by reference
                div = divCount;
                qtr = qtrCount;
            }//END IF
        }//END FOR qtrCount
    }//END FOR divCount

    //Return highest
    return highest;
}

/************************************************************
* Function Name : GetLowest
* Description : Compares each element of the array to retrieve
*               the lowest sale, passes the div and qtr by
*               reference and returns the lowest array element.
* Initial Algorithm :
*   FOR each division within the array
*       FOR each quarter within the division
*           IF array element is less than lowest
*               Set lowest to new lower array element
*               Set div and qtr to pass by reference
*           END IF
*       END FOR qtrCount
*   END FOR divCount
*   Return lowest
************************************************************/

double GetLowest(double sales[DIVS][QTRS], int& div, int& qtr)
{
    double lowest = sales[0][0];    //Lowest value within the sales array
    int divCount;                   //Count for divisions
    int qtrCount;                   //Count for quarters

    //FOR each division within the array
    for (divCount = 0; divCount < DIVS - 1; divCount++)
    {
        //FOR each quarter within the division
        for (qtrCount = 0; qtrCount < QTRS - 1; qtrCount++)
        {
            //IF array element is less than lowest
            if (sales[divCount][qtrCount] < lowest)
            {
                //Set lowest to new lower array element
                lowest = sales[divCount][qtrCount];

                //Set div and qtr to pass by reference
                div = divCount;
                qtr = qtrCount;
            }//END IF
        }//END FOR qtrCount
    }//END FOR divCount

    //Return lowest
    return lowest;
}
