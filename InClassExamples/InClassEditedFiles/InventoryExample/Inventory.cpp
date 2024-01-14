#include "inventory.h"

void AddItem(fstream* file)
{
    Inventory temp;

    if(file)
    {
        cin.ignore();
        cout << "Enter name of item ";
        cin.getline(temp.name, 19);
        cout << "Enter the quantity on hand ";
        cin >> temp.quantity;
        cout << "Enter the wholesale cost ";
        cin >> temp.wholeSale;
        cout << "Enter the retail cost ";
        cin >> temp.retail;

        file->write((char*)(&temp), sizeof(temp));
    }
    else
    {
        cout << "File not opened" << endl;
    }
}

int DisplayInventoryNames()
{
    Inventory temp;
    fstream* fileHandler = new fstream("inventory.dat", ios::in | ios::binary);

    if(fileHandler)
    {
        fileHandler->read((char*)(&temp), sizeof(temp));
        int count = 1;

        while(!fileHandler->eof())
        {
            cout << count << " - " << temp.name << endl;
            fileHandler->read((char*)(&temp), sizeof(temp));
            count++;
        }
        count--;
        fileHandler->close();
        delete fileHandler;
        fileHandler = nullptr;

        return count;
    }
}

void DisplayItem(fstream* file)
{
    Inventory temp;
    int recNum;
    int count;

    if(file)
    {
        count = DisplayInventoryNames();

        cout << "Which item would you like to display? ";
        cin >> recNum;
        while(recNum < 1 || recNum > count)
        {
            cout << "Wrong record number" << endl;
            cout << "Which item would you like to display? ";
            cin >> recNum;
        }

        file->seekg((recNum-1) * sizeof(temp), ios::beg);

        file->read((char*)(&temp), sizeof(temp));

        cout << temp.name << endl;
        cout << temp.quantity << endl;
        cout << temp.retail << endl;
        cout << temp.wholeSale << endl;
    }
    else
    {
        cout << "File not opened" << endl;
    }
}

void EditItem(fstream* file)
{
    Inventory temp;
    int recNum;
    int count;
    int choice;

    if(file)
    {
        count = DisplayInventoryNames();

        cout << "Which item would you like to edit? ";
        cin >> recNum;
        while(recNum < 1 || recNum > count)
        {
            cout << "Wrong record number" << endl;
            cout << "Which item would you like to display? ";
            cin >> recNum;
        }

        file->seekg((recNum-1) * sizeof(temp), ios::beg);

        file->read((char*)(&temp), sizeof(temp));

        cout << temp.name << endl;
        cout << temp.quantity << endl;
        cout << temp.retail << endl;
        cout << temp.wholeSale << endl;

        do
        {
            do
            {
                cout << "1 - Edit Name" << endl;
                cout << "2 - Edit Quantity" << endl;
                cout << "3 - Edit Wholesale" << endl;
                cout << "4 - Edit Retail" << endl;
                cout << "5 - Done Editing" << endl;
                cin >> choice;
            }while(choice < 1 || choice > 5);

            switch(choice)
            {
                case 1:
                    cin.ignore();
                    cout << "What is the new name? ";
                    cin.getline(temp.name, 19);
                    break;
                case 2:
                    cout << "What is the new quantity? ";
                    cin >> temp.quantity;
                    break;
                case 3:
                    cout << "What is the new wholesale? ";
                    cin >> temp.wholeSale;
                    break;
                case 4:
                    cout << "What is the new retail? ";
                    cin >> temp.retail;
                    break;
            }

        }while(choice != 5);

        file->seekp((recNum - 1)* sizeof(temp), ios::beg);

        file->write((char*)(&temp), sizeof(temp));
    }
    else
    {
        cout << "File not opened" << endl;
    }
}
