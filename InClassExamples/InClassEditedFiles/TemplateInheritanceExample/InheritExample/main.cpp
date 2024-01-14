#include <iostream>
#include "Square.h"
#include "Cube.h"
#include "Cube2.h"
using namespace std;

int main()
{
    Square<double> mySquare(5);

    double area;
    area = mySquare.CalculateArea();

    cout << "Area is " << area << endl;

    Cube<double> myCube(5);
    area = myCube.CalculateArea();

    cout << "Area is " << area << endl;

    Cube2<double> myCube2(6);
    area = myCube2.CalculateArea();

    cout << "Area is " << area << endl;

    Rectangle<double>* shapes;
    int choice = 1;

    while(choice != 4)
    {
        cout << "1 - Square" << endl;
        cout << "2 - Cube" << endl;
        cout << "3 - Cube 2" << endl;
        cout << "4 - Exit" << endl;
        cout << "Enter your choice ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                shapes = &mySquare;
                break;
            case 2:
                shapes = &myCube;
                break;
            case 3:
                shapes = &myCube2;
                break;
        }

        if(choice != 4)
        {
            area = shapes->CalculateArea();
            cout << "Area is " << area << endl;
        }
    }

    return 0;
}
