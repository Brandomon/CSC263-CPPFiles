#ifndef INVENTORYITEM_H_INCLUDED
#define INVENTORYITEM_H_INCLUDED
#include <string>
using namespace std;

// Constant for the description's default size
const int DEFAULT_SIZE = 51;

class InventoryItem
{
    private:
       string description;  // The item description
       double cost;         // The item cost
       int units;           // Number of units on hand

    public:
       // Constructor #1
       InventoryItem();

       // Constructor #2
       InventoryItem(string desc);

       // Constructor #3
       InventoryItem(string desc, double c, int u);

       // Destructor
       ~InventoryItem();

       // Mutator functions
       void setDescription(string d);
       void setCost(double c);
       void setUnits(int u);
       void sellUnits(int u, int numSold);


       // Accessor functions
       string getDescription() const;
       double getCost() const;
       int getUnits() const;
};

#endif // INVENTORYITEM_H_INCLUDED
