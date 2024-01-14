#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED
#include "Rectangle.h"


class Square : public Rectangle
{
    protected:

    public:
        Square(int side);
        int CalculateArea();
};


#endif // SQUARE_H_INCLUDED
