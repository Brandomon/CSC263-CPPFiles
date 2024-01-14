#include "TestScores.h"

/*******************************************************************************
* Program Name : TestScores
* Description : Prompts user to enter the number of test scores to be collected,
*               checking that the input is a positive number. The program then
*               will create an array of the given number size and prompt the user
*               to input values for each test score of the array given as a double
*               before calculating the average of the test scores and outputting the
*               formatted test scores and average of the scores.
* Additional Functions :
*               void GetGrades
*               double Average
*               void DisplayGrades
* Pseudocode :
* BEGIN TestScores
*   WHILE positive flag equals false
*       Prompt user to enter the number of test scores to be collected
*       IF number of tests is greater than or equal to zero
*           Set positive flag to true
*       ELSE arySize is a negative number
*           Set positive flag to false for redundancy
*           Output error message
*       END IF ELSE
*   END WHILE pos
*   Initialize array of user input size to zeros
*   Get test scores
*   Calculate average
*   Display test scores
*   Display average
* END TestScores
*******************************************************************************/

int main()
{
    const int DECIMAL = 2;      //Used with fixed/setprecision to set number of decimals shown
    int arySize = 0;            //Size of array input by user as integer
    bool pos = false;           //Flag for positive integer input of scores
    double average = 0;         //Calculated average of the test scores

    //WHILE positive flag equals false
    while (pos == false)
    {
        //Prompt user to enter the number of test scores to be collected
        cout << "Enter the number of test scores to be collected : ";
        cin >> arySize;

        //IF number of tests is greater than or equal to zero
        if(arySize >= 0)
            //Set positive flag to true
            pos = true;

        else //ELSE arySize is a negative number
        {
            //Set positive flag to false for redundancy
            pos = false;

            //Output error message
            cout << "ERROR: Only positive numbers are accepted\n" << endl;

        }//END IF ELSE

    }//END WHILE pos

    //Initialize array of user input size to zeros
    double scores[arySize] = {0};

    //Get test scores
    GetGrades(scores, arySize);

    //Calculate average
    average = Average(scores, arySize);

    //Display test scores
    DisplayGrades(scores, arySize);

    //Display average
    cout << "\n" << setw(15) << "" << "Average Score : " << fixed << setprecision(DECIMAL) << average << endl;

    return 0;
}
