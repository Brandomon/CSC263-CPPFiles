#include "PhoneNumberList.h"

/************************************************************
* Function Name : SearchPhoneBook
* Description : Prompts the user to enter a string to search
*               for within the array of strings of a given size
*               passed through the parameters
* Initial Algorithm :
*   Prompt user for search string
*   FOR each array element
*       IF the search string is found within array element
*           Display array element
*       END IF
*   END FOR
************************************************************/
void SearchPhoneBook(string phoneBook[], const int SIZE)
{
    int index;              //Counter for search loop
    string searchFor;       //User input to search array for

    //Prompt user for search string
    cout << "Enter a name, number or partial name or number to search for within the phone book : ";
    getline(cin, searchFor);
    cout << endl;

    //FOR each array element
    for(index = 0; index < SIZE; index++)
    {
        //IF the search string is found within array element
        if(phoneBook[index].find(searchFor) != string::npos)
        {
            //Display array element
            cout << phoneBook[index] << endl;
        }//END IF
    }//END FOR
}//END SearchPhoneBook
