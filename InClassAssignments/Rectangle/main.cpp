#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    double area;

    Rectangle rect;
    Rectangle* rect2 = new Rectangle(99, 33);

    rect.SetLength(10);
    rect.SetWidth(4);

  /*rect2->SetLength(4);
    rect2->SetWidth(6);*/

    area = rect.GetArea();

    cout << "The area of the rectangle is " << area << endl;

    area = rect2->GetArea();

    cout << "The area of the rectangle is " << area << endl;

    delete rect2;   //Must delete dynamically allocated objects using 'new'

    return 0;
}
