#include "Rectangle.h"

void Rectangle::SetLength(double l)
{
    length = l;
    CalculateArea();
}

void Rectangle::SetWidth(double w)
{
    width = w;
    CalculateArea();
}

double Rectangle::GetLength() const
{
    return length;
}

double Rectangle::GetWidth() const
{
    return width;
}

double Rectangle::GetArea() const
{
    return area;
}
void Rectangle::CalculateArea()
{
    area = length * width;
}

Rectangle::Rectangle()
{
    /*length = 0.0;
    width = 0.0;*/
    SetLength(0.0);
    SetWidth(0.0);
}
Rectangle::Rectangle(double len, double wid)
{
    SetLength(len);
    SetWidth(wid);
}

Rectangle::~Rectangle()
{
    cout << "Deconstructor with a length of " << length << endl;
}
