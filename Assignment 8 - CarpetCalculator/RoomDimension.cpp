#include "RoomDimension.h"

RoomDimension::RoomDimension()
{
    //constructor
}

RoomDimension::~RoomDimension()
{
    //destructor
}

void RoomDimension::SetLength(FeetInches l)
{
    length = l;
}

void RoomDimension::SetWidth(FeetInches w)
{
    width = w;
}

FeetInches RoomDimension::GetLength() const
{
    return length;
}

FeetInches RoomDimension::GetWidth() const
{
    return width;
}

//***************************************************
// Definition of member function CalculateArea.     *
// Multiplies the length and width of two FeetInches*
// objects as length and width of a room using a    *
// separate multiply function to find and return the*
// area as a FeetInches object.                     *
//***************************************************

FeetInches RoomDimension::CalculateArea()
{
    FeetInches area;    //Area of room as FeetInches object

    //Use multiply function to calculate area
    area = length.multiply(width);

    //Return area
    return area;
}
