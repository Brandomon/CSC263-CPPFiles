#include "CorporateSalesRecords.h"

/*******************************************************************************
* Program Name : CorporateSalesRecords
* Description : Prompts user to enter quarterly sales data for North, South, East,
*               and West divisions to be held by a two-dimensional array. The
*               program then calculates the totals of each quarter and division,
*               placing the values into the array before displaying the organized
*               data of the array followed by the total of all of the quarterly
*               sales of each division, the average of all the quarterly sales of
*               each division, the highest quarterly sales of the array, the
*               name and quarter of the division with the highest value of the
*               array elements, the lowest quarterly sales of the array, and
*               the name and quarter of the division with the lowest value of
*               the array.
* Additional Functions :
*               double GetTotal
*               double GetAverage
*               double GetRowTotal
*               double GetColumnTotal
*               double GetHighest
*               double GetLowest
* Refined Algorithm :
* BEGIN CorporateSalesRecords
*   Prompt user input of the array data
*   FOR each division
*       IF div is less than DIVS - 1
*           Prompt user for input of division sales
*           FOR each quarter of the division
*               IF qtr is not the total row
*                   Gather input for quarter sales
*               ELSE qtr = QTRS - 1 (Division total column)
*                   Get row total for division (division totals)
*               END IF
*           END FOR qtr
*       END IF div
*   END FOR div
*   Calculate quarter totals
*   FOR each quarter
*       Get column total for each quarter (quarter totals)
*   END FOR qtr
*   Display sales array with division and quarter labels and division and quarter totals
*   Place gap between input and array
*   Display blank space for upper left corner
*   Display each quarter and division total
*   FOR each quarter
*       Display quarter name
*   END FOR qtr
*   Print blank line
*   Display division names, quarter total, and the elements of the array
*   FOR each division
*       Display each division name and quarter total along left edge
*       Display quarterly sales for each division
*       FOR each quarter of the division
*           IF element is not the last element of the array
*               Display all but last element of array
*           END IF
*       END FOR qtr
*       Place gap between each row
*   END FOR div
*   Calculate total
*   Display total
*   Calculate average
*   Display average
*   Calculate highest
*   Display highest
*   Calculate lowest
*   Display lowest
* END CorporateSalesRecords
*******************************************************************************/

int main()
{
    //Local Constants
    const int ENDFMT = 60;                                                                          //Used with setw to format the output spacing for total, average, highest, and lowest
    const int ENDFMT2 = 49;                                                                         //Used with setw to format the output spacing for highest and lowest
    const int FORMAT = 19;                                                                          //Used with setw to format the output spacing for the array elements
    const int DECIMAL = 2;                                                                          //Used with setprecision to set decimals to be shown

    //Local Variables
    double sales[DIVS][QTRS];                                                                       // 2-dimensional array of company sales record
    string divisions[DIVS] = {"North", "South", "East", "West", "Quarter Total"};                   // Array of strings containing the division names
    string quarters[QTRS] = {"Quarter 1", "Quarter 2", "Quarter 3", "Quarter 4", "Division Total"}; // Array of strings containing the quarter names
    double total = 0.0;                                                                             // Total of all quarter sales for all divisions
    double average = 0.0;                                                                           // Average of all quarter sales for all divisions
    double highest = 0.0;                                                                           // Highest value from within the sales array
    double lowest = 0.0;                                                                            // Lowest value from within the sales array
    int div;                                                                                        // Counter for divisions within loops
    int qtr;                                                                                        // Counter for quarters within loops
    int hiDiv = 0;                                                                                  // Flag for division of highest quarterly division sale
    int hiQtr = 0;                                                                                  // Flag for quarter of highest quarterly division sale
    int lowDiv = 0;                                                                                 // Flag for division of lowest quarterly division sale
    int lowQtr = 0;                                                                                 // Flag for quarter of lowest quarterly division sale

    //Prompt user input of the array data
    cout << "Please enter the sales information for each division." << endl;
    //FOR each division
    for (div = 0; div < DIVS; div++)
    {
        //Gather input for division sales
        if (div < DIVS - 1)
        {
            //Prompt user for input of division sales
            cout << "Enter sales for " << divisions[div] << " division." << endl;

            //FOR each quarter of the division
            for (qtr = 0; qtr < QTRS; qtr++)
            {
                //IF qtr is not the total row
                if (qtr < QTRS - 1)
                {
                    //Gather input for quarter sales
                    cout << "Quarter " << qtr + 1 << " sales : $";
                    cin >> sales[div][qtr];
                }
                //Calculate division total
                else //qtr = QTRS - 1 (Division total column)
                {
                    //Get row total for division (division totals)
                    sales[div][QTRS - 1] = GetRowTotal(sales, div);
                }//END IF/ELSE
            }//END FOR qtr
        }//END IF div
    }//END FOR div

    //Calculate quarter totals
    //FOR each quarter
    for (qtr = 0; qtr < QTRS - 1; qtr++)
    {
        //Get column total for each quarter (quarter totals)
        sales[DIVS - 1][qtr] = GetColumnTotal(sales, qtr);
    }//END FOR qtr

    //Display sales array with division and quarter labels and division and quarter totals
    //Place gap between input and array
    cout << "\n\n" << endl;

    //Display blank space for upper left corner
    cout << setw(FORMAT) << "";

    //Display each quarter and division total
    //FOR each quarter
    for (qtr = 0; qtr < QTRS; qtr++)
    {
        //Display quarter name
        cout << setw(FORMAT) << quarters[qtr];
    }//END FOR qtr

    //Print blank line
    cout << "\n\n" << endl;

    //Display division names, quarter total, and the elements of the array
    //FOR each division
    for (div = 0; div < DIVS; div++)
    {
        //Display each division name and quarter total along left edge
        cout << setw(FORMAT) << divisions[div];

        //Display quarterly sales for each division
        //FOR each quarter of the division
        for (qtr = 0; qtr < QTRS; qtr++)
        {
            //Display all but last element of array
            if (qtr != QTRS - 1 || div != DIVS - 1)
                cout << setw(FORMAT) << fixed << setprecision(DECIMAL) << sales[div][qtr];
        }//END FOR qtr

        //Place gap between each row
        cout << "\n" << endl;
    }//END FOR div

    //Calculate total
    total = GetTotal(sales);

    //Display total
    cout << setw(ENDFMT) << "Total : $" << fixed << setprecision(DECIMAL) << total << endl;
    cout << endl;

    //Calculate average
    average = GetAverage(sales);

    //Display average
    cout << setw(ENDFMT) << "Average : $" << fixed << setprecision(DECIMAL) << average << endl;
    cout << endl;

    //Calculate highest
    highest = GetHighest(sales, hiDiv, hiQtr);

    //Display highest
    cout << setw(ENDFMT) << "Highest : $" << fixed << setprecision(DECIMAL) << highest << endl;
    cout << setw(ENDFMT2) << divisions[hiDiv] << " division in " << quarters[hiQtr] << "." << endl;
    cout << endl;

    //Calculate lowest
    lowest = GetLowest(sales, lowDiv, lowQtr);

    //Display lowest
    cout << setw(ENDFMT) << "Lowest : $" << fixed << setprecision(DECIMAL) << lowest << endl;
    cout << setw(ENDFMT2) << divisions[lowDiv] << " division in " << quarters[lowQtr] << "." << endl;
    cout << endl;

    return 0;
}
