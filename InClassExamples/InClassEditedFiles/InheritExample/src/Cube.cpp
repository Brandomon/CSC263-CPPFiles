#include "Cube.h"

Cube::Cube(int side) : Rectangle(side, side)
{
    cout << "Cube" << endl;
}

int Cube::CalculateArea()
{
    int area;

    area = 6 * (length * length);

    return area;
}
