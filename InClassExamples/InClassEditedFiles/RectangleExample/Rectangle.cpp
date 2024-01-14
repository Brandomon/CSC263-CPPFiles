#include "RectangleExample.h"

void SetLength(double l)
{
    length = l;
}

void SetWidth(double w)
{
    width = w;
}

double GetLength() const
{
    return length;
}

double GetWidth() const
{
    return width;
}

double GetArea() const
{
    double area;

    area = length * width;

    return area;
}
