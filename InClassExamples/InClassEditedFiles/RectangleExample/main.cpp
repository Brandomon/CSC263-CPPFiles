#include <iostream>
#include "RectangleExample.h"
using namespace std;

int main()
{
    double area;

    Rectangle rect;
    rect.SetLength(10);
    rect.SetWidth(4);

    area = rect.GetArea();

    cout << "The area of the rectangle is " << area << endl;
    return 0;
}
