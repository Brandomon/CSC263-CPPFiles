#include "InventoryItem.h"

/************************************************************
* Function Name : InventoryItem::InventoryItem
* Description : Default Constructor #1
************************************************************/
InventoryItem::InventoryItem()
{
    // Initialize cost and units.
    cost = 0.0;
    units = 0;
    description = "";
}

/************************************************************
* Function Name : InventoryItem::InventoryItem
* Description : Constructor #2
************************************************************/
InventoryItem::InventoryItem(string desc)
{
    // Initialize cost and units.
    cost = 0.0;
    units = 0;
    description = desc;
}

/************************************************************
* Function Name : InventoryItem::InventoryItem
* Description : Constructor #3
************************************************************/
InventoryItem::InventoryItem(string desc, double c, int u)
{
    // Assign values to cost and units.
    cost = c;
    units = u;
    description = desc;
}

/************************************************************
* Function Name : InventoryItem::InventoryItem
* Description : Destructor
************************************************************/
InventoryItem::~InventoryItem()
{

}

// Mutator functions
/************************************************************
* Function Name : InventoryItem::setDescription
* Description : Sets the description of the InventoryItem
************************************************************/
void InventoryItem::setDescription(string d)
{
    description = d;
}

/************************************************************
* Function Name : InventoryItem::setCost
* Description : Sets the cost of the InventoryItem
************************************************************/
void InventoryItem::setCost(double c)
{
    cost = c;
}

/************************************************************
* Function Name : InventoryItem::setUnits
* Description : Sets the units of the InventoryItem
************************************************************/
void InventoryItem::setUnits(int u)
{
    units = u;
}

/************************************************************
* Function Name : InventoryItem::sellUnits
* Description : Sets the units of the InventoryItem after a sale
*               using the number of units and number sold as parameters
************************************************************/
void InventoryItem::sellUnits(int u, int numSold)
{
    units = u - numSold;
}

// Accessor functions
/************************************************************
* Function Name : InventoryItem::getDescription
* Description : Gets the description of the InventoryItem and
*               returns the description as a string
************************************************************/
string InventoryItem::getDescription() const
{
    return description;
}

/************************************************************
* Function Name : InventoryItem::getCost
* Description : Gets the cost of the InventoryItem and returns
*               the cost as a double
************************************************************/
double InventoryItem::getCost() const
{
    return cost;
}

/************************************************************
* Function Name : InventoryItem::getUnits
* Description : Gets the number of units of the InventoryItem
*                and returns the units as an integer
************************************************************/
int InventoryItem::getUnits() const
{
    return units;
}
