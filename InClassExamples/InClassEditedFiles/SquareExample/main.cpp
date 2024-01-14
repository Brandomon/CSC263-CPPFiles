#include <iostream>
#include "Square.h"
using namespace std;

int main()
{
    Square mySquare(5);

    int area;
    area = mySquare.CalculateArea();

    cout << "Area is " << area << endl;

    Cube myCube(5);

    area = myCube.CalculateArea();

    cout << "Area is " << area << endl;

    return 0;
}
