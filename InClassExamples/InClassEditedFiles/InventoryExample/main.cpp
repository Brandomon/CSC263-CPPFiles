#include <iostream>
#include "Inventory.h"
#include <fstream>
using namespace std;

void DisplayMenu();
int Menu();
void DisplayInventory();

enum menuChoices {ADD=1, DISPLAY, EDIT, EXIT};

int main()
{
    int menuChoice;
    fstream* fileHandler;

    do
    {
        menuChoice = Menu();

        switch(menuChoice)
        {
            case ADD:
                fileHandler = new fstream("inventory.dat", ios::app | ios::binary);
                AddItem(fileHandler);
                fileHandler->close();
                delete fileHandler;
                fileHandler = nullptr;
                //DisplayInventory();
                break;

            case DISPLAY:
                fileHandler = new fstream("inventory.dat", ios::in | ios::binary);
                DisplayItem(fileHandler);
                fileHandler->close();
                delete fileHandler;
                fileHandler = nullptr;
                break;

            case EDIT:
                fileHandler = new fstream("inventory.dat", ios::in | ios::out | ios::binary);
                EditItem(fileHandler);
                fileHandler->close();
                delete fileHandler;
                fileHandler = nullptr;
                DisplayInventory();
                break;
        }

    }while(menuChoice != EXIT);

    cout << "End of Program" << endl;

    return 0;
}

void DisplayMenu()
{
    cout << "1 - Add Item" << endl;
    cout << "2 - Display Item" << endl;
    cout << "3 - Edit Item" << endl;
    cout << "4 - Exit" << endl;
}

int Menu()
{
    int choice;

    DisplayMenu();
    cout << "Enter menu choice ";
    cin >> choice;
    while(choice < ADD || choice > EXIT)
    {
        cout << "Invalid menu choice, try again" << endl;
        DisplayMenu();
        cout << "Enter menu choice ";
        cin >> choice;
    }

    return choice;
}

void DisplayInventory()
{
    Inventory temp;
    fstream* fileHandler = new fstream("inventory.dat", ios::in | ios::binary);

    if(fileHandler)
    {
        fileHandler->read((char*)(&temp), sizeof(temp));
        while(!fileHandler->eof())
        {
            cout << temp.name << endl;
            cout << temp.quantity << endl;
            cout << temp.retail << endl;
            cout << temp.wholeSale << endl;
            fileHandler->read((char*)(&temp), sizeof(temp));
        }
    }
    else
    {
        cout << "File not opened" << endl;
    }

    fileHandler->clear();
    delete fileHandler;
    fileHandler = nullptr;
}
