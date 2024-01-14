#include "Square.h"

Square::Square(int side) : Rectangle(side, side)
{
    cout << "Square" << endl;
}

int Square::CalculateArea()
{
    int area;

    area = length * length;

    return area;
}
