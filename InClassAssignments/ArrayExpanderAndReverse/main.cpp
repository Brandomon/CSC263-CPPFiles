#include "ArrayExpanderAndReverse.h"

int main()
{
    int arySize;        //Size of array as integer, input by user
    int counter;        //Counter for loop to create array of random integers
    int *expNums;       //Pointer to the start of the expanded array
    int *revNums;       //Pointer to the start of the reversed array

    //Prompt user for size of array
    cout << "Enter the size of the array to create : ";
    cin >> arySize;

    //Declare array of user input size
    int randNums[arySize];

    //Seed random number generator with current time
    srand((unsigned)time(0));

    //Initialize the elements of the array with random numbers between 1 and 10 inclusively
    for(counter = 0; counter < arySize; counter++)
        randNums[counter] = (rand()%10+1);

    //Expand the array and store the pointer in expNums
    expNums = ArrayExpander(randNums, arySize);

    //Reverse the array and store the pointer in revNums
    revNums = ArrayReverse(expNums, arySize);

    //Display the expanded array
    cout << "The expanded array : " << endl;
    DisplayGrades(expNums, arySize);
    cout << "\n" << endl;

    //Display the reversed array
    cout << "The reversed array : " << endl;
    DisplayGrades(revNums, arySize);
    cout << "\n" << endl;

    delete randNums;
    delete expNums;
    delete revNums;

    return 0;
}
