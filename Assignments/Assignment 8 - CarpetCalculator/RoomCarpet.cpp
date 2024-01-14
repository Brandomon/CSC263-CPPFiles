#include "RoomCarpet.h"

RoomCarpet::RoomCarpet()
{
    //Constructor
}

RoomCarpet::~RoomCarpet()
{
    //Destructor
}

void RoomCarpet::SetCarpetCost(double c)
{
    carpetCost = c;
}

void RoomCarpet::SetRoomCarpet(RoomDimension r)
{
    myRoom = r;
}

double RoomCarpet::GetCarpetCost() const
{
    return carpetCost;
}

double RoomCarpet::CalculateTotalCost() const
{
    double totalCost = 0.0;         //Total cost of the carpet for the entire area
    double area = 0.0;              //Area of the room as a double
    RoomDimension temp;             //Temp RoomDimension object for area dimensions

    //Set temp dimensions to RoomDimension object myRoom
    temp = myRoom;

    //Calculate area of myRoom dimensions
    area = temp.CalculateArea();

    //Calculate total cost of carpet
    totalCost = area * carpetCost;

    //Return totalCost
    return totalCost;
}
