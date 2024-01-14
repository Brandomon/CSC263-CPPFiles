#include "Item.h"

/************************************************************
* Function Name : AddItem
* Description : Prompts the user to enter the name, quantity,
*               wholesale cost, and retail cost of an item to
*               add to the output file.
* Initial Algorithm :
*   Prompt user for new item name
*   Prompt user for quantity on hand
*   Prompt user for wholesale cost
*   Prompt user for retail cost
*   Append new Item to end of inventory.dat
************************************************************/
void AddItem(fstream &inventoryFile)
{
    Item newItem;       //Item structure to add to file

    //Prompt user for new item name
    cout << "Input item name : ";
    cin >> newItem.name;

    //Prompt user for quantity on hand
    cout << "Input quantity on hand : ";
    cin >> newItem.quantity;

    //Prompt user for wholesale cost
    cout << "Input the wholesale cost : ";
    cin >> newItem.wholesale;

    //Prompt user for retail cost
    cout << "Input the retail cost : ";
    cin >> newItem.retail;

    //Append new Item to end of inventory.dat
    inventoryFile.open("inventory.dat", fstream::app | ios::out | ios::binary);
    inventoryFile.write(reinterpret_cast<char *>(&newItem), sizeof(newItem));
    inventoryFile.close();
}

/************************************************************
* Function Name : DisplayItem
* Description : Prompts the user to enter a record number to
*               display the record of the given number within
*               the input file.
* Initial Algorithm :
*   Prompt user for record number to display
*   Open inventoryFile for input in binary
*   Move to the user input record number within inventoryFile
*   IF not within inventory file
*       Output error message
*   ELSE display the inventory item
*       Display the formatted inventory item
*   Close the inventory file
************************************************************/
void DisplayItem(fstream &inventoryFile)
{
    const int FMT1 = 20;    //Used for formatting output with setw
    const int FMT2 = 21;    //Used for formatting output with setw
    const int DEC = 2;      //Used with fixed setprecision for decimal output
    Item temp;              //Temporary item structure that holds data output
    int recordNum = 0;      //Record number to find within file - input by user

    //Prompt user for record number to display
    cout << "Enter the record number to open : ";
    cin >> recordNum;
    cout << endl;

    //Open inventoryFile for input in binary
    inventoryFile.open("inventory.dat", ios::in | ios::binary);

    //Move to the user input record number within inventoryFile
    inventoryFile.clear();
    inventoryFile.seekg(0L, ios::beg);
    inventoryFile.seekg(sizeof(Item) * (recordNum - 1), ios::beg);
    inventoryFile.read(reinterpret_cast<char *>(&temp), sizeof(Item));

    //IF not within inventory file
    if(!inventoryFile)
    {
        //Output error message
        cout << "The inputted record is not within the file" << endl;
    }
    //ELSE display the inventory item
    else
    {
        //Display the formatted inventory item
        cout << setw(FMT1) << "Name : " << temp.name << endl;
        cout << setw(FMT1) << "Quantity : " << temp.quantity << endl;
        cout << setw(FMT2) << "Wholesale Cost : $" << fixed << setprecision(DEC) << temp.wholesale << endl;
        cout << setw(FMT2) << "Retail Cost : $" << temp.retail << endl;
    }

    //Close the inventory file
    inventoryFile.close();
}

/************************************************************
* Function Name : EditItem
* Description : Prompts the user to enter a record number to
*               edit the record of the given number within the
*               input file before prompting the user for the
*               new data and copying the information to a temp
*               output file. The function then clears the original
*               file of all data and copies the edited data from
*               the temp file to the inventory file.
* Initial Algorithm :
*   Wipe tempFile clean
*   Get record number to edit
*   Copy each structure to tempFile before file to edit
*   Get new struct Item information and write to tempFile
*   Copy each structure to tempFile after file to edit until end of file
*   Wipe inventoryFile clean
*   Copy each structure to inventoryFile from tempFile until end of file
*
* Refined Algorithm :
*   Wipe tempFile clean
*   Prompt user for record number to edit
*   Open inventoryFile for input in binary
*   Move to the user input record number
*   IF not within inventory file
*       Output error message
*   ELSE edit record at recordNum - 1
*       Move to beginning of file
*       WHILE inventoryFile still has data
*           IF recordCount is not at the record to edit
*               Move to the recordCount
*               IF at end of file
*                   Display completion of first copy
*               ELSE write data to tempFile
*                   Open tempFile to append output in binary, write, and close
*               END IF ELSE
*           ELSE recordCount is at the record to edit
*               Prompt for new item name
*               Prompt for quantity on hand
*               Prompt for wholesale cost
*               Prompt for retail cost
*               Open tempFile to append in binary, write, and close
*           END IF ELSE
*           Increment recordCount
*       Close inventoryFile
*       Copy tempFile contents to inventoryFile
*       Wipe inventoryFile of the original contents
*       Open tempFile for input
*       Move to beginning of tempFile
*       Reinitialize recordCount to 1
*       WHILE tempFile still has data
*           Move to the record count in tempFile
*           IF at end of tempFile
*               Output edit has been successful
*           END IF
*           ELSE write data to inventoryFile
*               Open inventoryFile to append output in binary, write, and close
*           Increment recordCount
*       END WHILE
*       Close tempFile
*   END IF ELSE
************************************************************/
void EditItem(fstream &inventoryFile)
{
    fstream tempFile;       //Temp file created to store the edited file
    Item temp;              //Temporary item structure that holds data output
    int recordNum = 0;      //Record number to find within file - input by user
    int recordCount = 1;    //Record count for copying the items from file to file

    //Wipe tempFile clean
    tempFile.open("temp.dat", ios::out | ios::binary);
    tempFile.close();

    //Prompt user for record number to edit
    cout << "Enter the record number to edit : ";
    cin >> recordNum;
    cout << endl;

    //Open inventoryFile for input in binary
    inventoryFile.open("inventory.dat", ios::in | ios::binary);

    //Move to the user input record number
    inventoryFile.clear();
    inventoryFile.seekg(0L, ios::beg);
    inventoryFile.seekg(sizeof(Item) * (recordNum - 1), ios::beg);
    inventoryFile.read(reinterpret_cast<char *>(&temp), sizeof(Item));

    //IF not within inventory file
    if(!inventoryFile)
    {
        //Output error message
        cout << "The inputted record is not within the file" << endl;
    }

    //Else edit record at recordNum - 1
    else
    {
        //Move to beginning of file
        inventoryFile.clear();
        inventoryFile.seekg(0L, ios::beg);

        //WHILE inventoryFile still has data
        while(inventoryFile)
        {
            //IF recordCount is not at the record to edit
            if(recordCount != recordNum)
            {
                //Move to the recordCount
                inventoryFile.clear();
                inventoryFile.seekg(0L, ios::beg);
                inventoryFile.seekg(sizeof(Item) * (recordCount - 1), ios::beg);
                inventoryFile.read(reinterpret_cast<char *>(&temp), sizeof(Item));

                //IF at end of file
                if(!inventoryFile)
                {
                    //Display completion of first copy
                    cout << "\nEdits copied to temporary file..." << endl;
                }

                //ELSE write data to tempFile
                else
                {
                    //Open tempFile to append output in binary, write, and close
                    tempFile.open("temp.dat", fstream::app | ios::out | ios::binary);
                    tempFile.write(reinterpret_cast<char *>(&temp), sizeof(Item));
                    tempFile.close();
                }//END IF ELSE
            }//END IF

            //ELSE recordCount is at the record to edit
            else
            {
                //Prompt for new item name
                cout << "Enter new item name : ";
                cin >> temp.name;

                //Prompt for quantity on hand
                cout << "Enter quantity on hand : ";
                cin >> temp.quantity;

                //Prompt for wholesale cost
                cout << "Enter the wholesale cost : $";
                cin >> temp.wholesale;

                //Prompt for retail cost
                cout << "Enter the retail cost : $";
                cin >> temp.retail;

                //Open tempFile to append in binary, write, and close
                tempFile.open("temp.dat", ios::app | ios::binary);
                tempFile.write(reinterpret_cast<char *>(&temp), sizeof(Item));
                tempFile.close();
            }//END IF ELSE

            //Increment recordCount
            recordCount++;

        }//END WHILE

        //Close inventoryFile
        inventoryFile.close();

        //Copy tempFile contents to inventoryFile
        //Wipe inventoryFile of the original contents
        inventoryFile.open("inventory.dat", ios::out | ios::binary);
        inventoryFile.close();

        //Open tempFile for input
        tempFile.open("temp.dat", ios::in | ios::binary);

        //Move to beginning of tempFile
        tempFile.clear();
        tempFile.seekg(0L, ios::beg);

        //Reinitialize recordCount to 1
        recordCount = 1;

        //WHILE tempFile still has data
        while(tempFile)
        {
            //Move to the record count in tempFile
            tempFile.clear();
            tempFile.seekg(0L, ios::beg);
            tempFile.seekg(sizeof(Item) * (recordCount - 1), ios::beg);
            tempFile.read(reinterpret_cast<char *>(&temp), sizeof(Item));

            //IF at end of tempFile
            if(!tempFile)
            {
                //Output edit has been successful
                cout << "Edits have been saved to original file." << endl;
            }

            //ELSE write data to inventoryFile
            else
            {
                //Open inventoryFile to append output in binary, write, and close
                inventoryFile.open("inventory.dat", fstream::app | ios::out | ios::binary);
                inventoryFile.write(reinterpret_cast<char *>(&temp), sizeof(Item));
                inventoryFile.close();

            }//END IF ELSE

            //Increment recordCount
            recordCount++;

        }//END WHILE

        //Close tempFile
        tempFile.close();

    }//END IF ELSE

}//END EditItem
