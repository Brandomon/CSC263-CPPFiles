#include "InventoryItem.h"
#include "CashRegister.h"
#include <iostream>
#include <iomanip>

/************************************************************
* Program Name : CashRegister
* Description : Hard codes an array of class InventoryItem
*   objects called inventory. The program then displays the
*   formatted inventory to the user, prompting for a number
*   associated with the corresponding item within the same row
*   and then the quantity of the item wanted for the order before
*   calculating and displaying the price of the items after a 30%
*   profit increase of the item cost times the number of items
*   as a subtotal. The program then calculates and displays a
*   6% tax on the item and then the final total cost before
*   asking if the user would like to make another purchase.
************************************************************/
int main()
{
    //Local Constants
    const int INVENTORYSIZE = 5;        //Number of items within the InventoryItem array
    const int FMT1 = 5;                 //Used with setw to format output
    const int FMT2 = 24;                //Used with setw to format output
    const int FMT3 = 30;                //Used with setw to format output
    const int FMT4 = 73;                //Used with setw to format output
    const int FMT5 = 12;                //Used with setw to format output
    const int DCML = 2;                 //Used with fixed setprecision to set decimal places shown

    //Local Variables
    char again = 'y';                   //User choice of purchasing another order
    int index = 0;                      //Index used to display all array objects
    int itemChoice = 0;                 //User choice of item to purchase
    int qtyChoice = 0;                  //User choice of number of items to purchase
    bool itemChoiceFlag = false;        //Boolean flag to return true if itemChoice is accepted
    bool qtyChoicePos = false;          //Boolean flag to return true if qtyChoice is accepted

    //Hard-Code inventory (array of InventoryItem class objects pre-loaded with data)
    InventoryItem inventory[INVENTORYSIZE] = {InventoryItem("Wiper Chains", 9.95, 11),
                                              InventoryItem("Headlight Fluid", 16.79, 9),
                                              InventoryItem("Muffler Bearings", 62.75, 3),
                                              InventoryItem("Winter Tire Air", 12.99, 26),
                                              InventoryItem("Blinker Springs", 24.49, 7) };

    //WHILE again equals a 'y' or 'Y', run through another purchase
    while (again == 'y' || again == 'Y')
    {
        //Initialize itemChoice and qtyChoice to 0 and boolean flags to false
        itemChoice = 0;
        qtyChoice = 0;
        itemChoiceFlag = false;
        qtyChoicePos = false;

        //Display the item inventory title
        cout << left << setw(FMT1) << "#" << setw(FMT2) << "Item" << setw(FMT3) << "Quantity on Hand" << setw(FMT5) << "Wholesale Cost" << endl;
        cout << setfill('-');
        cout << setw(FMT4) << "-" << endl;
        cout << setfill(' ');

        //Display the item inventory
        for (index = 0; index < INVENTORYSIZE; index++)
        {
            cout << setw(FMT1) << index+1
                 << setw(FMT2) << inventory[index].getDescription()
                 << setw(FMT3) << inventory[index].getUnits()
                 << setw(FMT5) << inventory[index].getCost() << endl;
        }

        //Prompt user for item being purchased
        while(itemChoiceFlag == false)
        {
            cout << "Which item above is being purchased? : ";
            cin >> itemChoice;
            if(itemChoice <= 0 || itemChoice > INVENTORYSIZE)
                cout << "ERROR: Please enter one of the listed item numbers" << endl;
            else
                itemChoiceFlag = true;
        }

        //Prompt user for quantity of items being purchased
        while(qtyChoicePos == false)
        {
            cout << "How many units? : ";
            cin >> qtyChoice;

            //IF qtyChoice is less than 0, display error message
            if(qtyChoice < 0)
                cout << "ERROR: Please enter a positive value" << endl;

            //ELSE set qtyChoicePos flag to true
            else
                qtyChoicePos = true;
        }

        //IF qtyChoice is greater than inventory of item, display error message
        if (qtyChoice > inventory[itemChoice-1].getUnits())
        {
            cout << "ERROR: Number of units in stock cannot suffice order." << endl;
        }

        //ELSE qtyChoice is less than or equal to inventory of item
        else
        {
            //Remove sold items from inventory
            inventory[itemChoice-1].sellUnits(inventory[itemChoice-1].getUnits(), qtyChoice);

            //Declare instance of CashRegister called purchase
            CashRegister purchase;

            //Calculate purchase subtotal
            purchase.CalcSubtotal(inventory[itemChoice-1].getCost(), qtyChoice);

            //Display purchase subtotal
            cout << setw(FMT5) << "Subtotal:" << "$" << fixed << setprecision(DCML) << purchase.GetSubtotal() << endl;

            //Calculate sales tax
            purchase.CalcTax(purchase.GetSubtotal());

            //Display sales tax
            cout << setw(FMT5) << "Sales Tax:" << "$" << fixed << setprecision(DCML) << purchase.GetTax() << endl;

            //Calculate total
            purchase.CalcTotal();

            //Display total
            cout << setw(FMT5) << "Total:" << "$" << fixed << setprecision(DCML) << purchase.GetTotal() << endl;
        }

        //Prompt user to purchase again
        cout << "Do you want to purchase another item? (Y/N): ";
        cin >> again;
    }

    return 0;
}
