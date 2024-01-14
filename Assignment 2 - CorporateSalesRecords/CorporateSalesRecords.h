#ifndef CORPORATESALESRECORDS_H_INCLUDED
#define CORPORATESALESRECORDS_H_INCLUDED

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

//Global Constants
const int DIVS = 5;         //Number of Divisions within the two-dimensional array
const int QTRS = 5;         //Number of Quarters within the two-dimensional array

//Function Prototypes
double GetTotal(double sales[DIVS][QTRS]);                          // Gets the total of the complete array except for the totals in the last column and last row.
double GetAverage(double sales[DIVS][QTRS]);                        // Return the average of all the values in the array except for the column and row with the totals in them.
double GetRowTotal(double sales[DIVS][QTRS], int div);              // Returns the total for row that is specified by the second parameter to the function.
double GetColumnTotal(double sales[DIVS][QTRS], int qtr);           // Returns the total for a column that is specified by the second parameter to the function.
double GetHighest(double sales[DIVS][QTRS], int& div, int& qtr);    // Returns the highest value in the array. Last two parameters are the index values of where the highest
                                                                    //      value is located in the 2D array; these can then be used to display which division and quarter.
double GetLowest(double sales[DIVS][QTRS], int& div, int& qtr);     // Returns the lowest value in the array. Last two parameters are the index values of where the highest
                                                                    //      value is located in the 2D array, these can then be used to display which division and quarter.
#endif // CORPORATESALESRECORDS_H_INCLUDED
