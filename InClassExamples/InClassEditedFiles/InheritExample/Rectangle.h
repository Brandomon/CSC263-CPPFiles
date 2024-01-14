#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include <iostream>
using namespace std;

class Rectangle
{
    protected:
        int length;
        int width;

    public:
        Rectangle(int length, int width);
        virtual int CalculateArea() = 0;
};

#endif // RECTANGLE_H_INCLUDED
