#include "TestScores.h"

/************************************************************
* Function Name : GetGrades
* Description : Prompts the user to enter the test scores to
*               fill the array of scores.
* Pseudocode :
*   Prompt user input of the array data
*   FOR each array element
*       Set positive flag to false
*           WHILE positive flag equals false
*               Prompt user for input of test score
*               IF test score is positive
*                   Set positive flag to true
*               ELSE test score is negative
*                   Set positive flag to false for redundancy
*                   Output error message
*               END IF ELSE
*       END WHILE pos
*   END FOR counter
************************************************************/

void GetGrades(double* scores, int size)
{
    int counter = 0;                //Counter for inputting the array elements
    bool pos = false;               //Flag for positive integer input of test scores

    //Prompt user input of the array data
    cout << "Please enter the " << size << " test scores." << endl;

    //FOR each array element
    for(counter = 0; counter < size; counter++)
    {
        //Set positive flag to false
        pos = false;

        //WHILE positive flag equals false
        while(pos == false)
        {
            //Prompt user for input of test score
            cout << "Enter test " << counter + 1 << " score : ";
            cin >> *(scores + counter);

            //IF test score is positive
            if( *(scores + counter) >= 0)
                //Set positive flag to true
                pos = true;

            else //ELSE test score is negative
            {
                //Set positive flag to false for redundancy
                pos = false;

                //Output error message
                cout << "ERROR: Only positive numbers are accepted\n" << endl;
            }//END IF ELSE

        }//END WHILE pos

    }//END FOR counter

}//END GetGrades

/************************************************************
* Function Name : Average
* Description : Runs through the array given through the
*               parameters and adds all of the elements into
*               the total before calculating the returning the
*               average.
* Pseudocode :
*   FOR each array element
*       Add element into total
*   END FOR counter
*   Calculate average
*   Return average
************************************************************/

double Average(double* scores, int size)
{
    double average = 0;                 //Average of the array elements
    double total = 0;                   //Total of the array elements used for finding the average
    int counter = 0;                    //Counter for looping through the array

    //FOR each array element
    for(counter = 0; counter < size; counter++)
    {
        //Add array element into total
        total += *(scores + counter);
    }//END FOR counter

    //Calculate average
    average = total / size;

    //Return average
    return average;

}//END Average

/************************************************************
* Function Name : DisplayGrades
* Description : Runs through the array given through the
*               parameters and formats the output of each
*               array element.
* Pseudocode :
*   Display title
*   FOR each array element
*       Display formatted test score
*   END FOR counter
************************************************************/

void DisplayGrades(double* scores, int size)
{
    const int DECIMAL = 2;              //Used with fixed/setprecision to set number of decimals shown
    int counter = 0;                    //Counter for displaying each element of the array of test scores

    //Display title
    cout << "\n" << setw(21) << "Scores" << endl;

    //FOR each array element
    for(counter = 0; counter < size; counter++)
    {
        //Display formatted test score
        cout << "\n" << setw(20) << fixed << setprecision(DECIMAL) << *(scores + counter) << endl;

    }//END FOR counter

}//END DisplayGrades
