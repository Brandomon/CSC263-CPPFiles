#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

struct Item
{
    char name[20];      //Name of item within char array of size 20
    int quantity;       //Quantity of item as int
    double wholesale;   //Wholesale cost of item as double
    double retail;      //Retail cost of item as double
};

void AddItem(fstream &inventoryFile);       //Prompts user for Item data to store a new Item at the end of the file
void DisplayItem(fstream &inventoryFile);   //Prompts user for a record number to display the record of the given number within the list
void EditItem(fstream &inventoryFile);      //Prompts user for a record number to edit the record of the given number within the list

#endif // ITEM_H_INCLUDED
