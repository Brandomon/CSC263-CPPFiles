#include "Cube2.h"

Cube2::Cube2(int side) : Square(side)
{
    cout << "Cube2" << endl;
}

int Cube2::CalculateArea()
{
    int area;

    area = 6 * (length * length);

    return area;
}
