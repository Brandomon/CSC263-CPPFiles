#include "ArrayExpanderAndReverse.h"

int* ArrayExpander(int* data, int size)
{
    //Function Constants
    const int dblSize = size * 2;       //Size of the expanded array, twice the size of the argument array

    //Function Variables
    int counter;                        //Counter for loop to fill the new array
    int *expArray = new int[dblSize];   //Pointer to the start of the new array containing double the array elements

    //Double the size of the array
    for (counter = 0; counter < dblSize; counter++)
    {
        //If the array element is empty, fill with a zero
        if (counter >= size)
            *(expArray + counter) = 0;
        //Else fill the new array with the old array elements
        else
            *(expArray + counter) = data[counter];
    }

    //Return a pointer to the start of the expanded array
    return expArray;
}

int* ArrayReverse(int* data, int size)
{
    //Function Constants
    const int dblSize = size * 2;       //Size of the expanded array, twice the size of the argument array

    //Function Variables
    int counter = 0;                    //Counter for loop to fill the new array
    int revCounter;                     //Reversed counter for loop to fill the new array
    int *revArray = new int[dblSize];   //Pointer to the start of the new array containing the reversed array elements

    //Reverse the order of the array
    for (revCounter = dblSize - 1; revCounter >= 0; revCounter--)
    {
        *(revArray + counter) = data[revCounter];
        counter++;
    }

    //Return the pointer to the start of the reversed array
    return revArray;
}

void DisplayGrades(int* data, int size)
{
    //Function Constants
    const int dblSize = size * 2;   //Size of the expanded array, twice the size of the argument array

    //Function Variables
    int counter;                    //Counter for loop to display the given array

    //Print out each element of the array
    for (counter = 0; counter < dblSize; counter++)
        cout << *(data + counter) << " ";
}
