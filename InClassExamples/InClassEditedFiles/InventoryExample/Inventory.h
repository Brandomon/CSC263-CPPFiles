#ifndef INVENTORY_H_INCLUDED
#define INVENTORY_H_INCLUDED

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

struct Inventory
{
    char name[20];
    int quantity;
    double wholeSale;
    double retail;
};

void AddItem(fstream* file);
void DisplayItem(fstream* file);
void EditItem(fstream* file);


#endif // INVENTORY_H_INCLUDED
