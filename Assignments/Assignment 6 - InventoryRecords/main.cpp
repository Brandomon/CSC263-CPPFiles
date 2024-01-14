#include "Item.h"

int GetUserChoice();

/*******************************************************************************
* Program Name : InventoryRecords
* Description : Provides a menu that has options to add a record into the file,
*               display a record within the file, edit a record within the file,
*               or exit the program. The program will create an inventory file
*               which contains the added structures written in binary and a
*               temporary file in order to edit the records and maintain order.
* Additional Functions :
*               int GetUserChoice
* Refined Algorithm :
* BEGIN InventoryRecords
*   Run through menu at least once
*   Get userChoice of menu option
*   Switch Case(userChoice)
*   DO WHILE user chooses not to exit
* END InventoryRecords
*******************************************************************************/
int main()
{
    const int ADD = 1;          //Menu option to add record into file
    const int DISPLAY = 2;      //Menu option to display record in file
    const int CHANGE = 3;       //Menu option to change record in file
    const int EXIT = 4;         //Menu option to exit
    int userChoice = 0;         //User input of menu choice

    fstream inventoryFile;

    //Run through menu at least once
    do
    {
        //Get userChoice of menu option
        userChoice = GetUserChoice();

        //Menu choices
        switch(userChoice)
        {
            case ADD:
                AddItem(inventoryFile);
                cout << endl;
                break;

            case DISPLAY:
                DisplayItem(inventoryFile);
                cout << endl;
                break;

            case CHANGE:
                EditItem(inventoryFile);
                cout << endl;
                break;

            case EXIT:
                cout << "\nGoodbye!" << endl;
                break;

            default:
                cout << "Input Error: Select one of the following choices (1-4)" << endl;
        }

        delete inventoryFile;

    //DO WHILE user chooses not to exit
    } while (userChoice != EXIT);
}

/************************************************************
* Function Name : GetUserChoice
* Description : Provides a menu to the user with options to
*               either add a record, display a record, edit
*               a record, or exit before prompting the user
*               for their choice and returning the choice.
* Initial Algorithm :
*   Display user menu
*   Prompt for choice
*   Return choice
************************************************************/
int GetUserChoice()
{
    int choice = 0;         //User input of menu choice

    //Display user menu
    cout << "---------------USER MENU---------------" << endl
         << "1) Add new inventory record to the file" << endl
         << "2) Display record from file" << endl
         << "3) Change record within file" << endl
         << "4) Exit" << endl << endl;

    //Prompt for choice
    cout << "Menu Choice : ";
    cin >> choice;
    cout << endl;

    //Return choice
    return choice;
}
