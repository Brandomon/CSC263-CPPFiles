#ifndef CUBE_H_INCLUDED
#define CUBE_H_INCLUDED

#include "Rectangle.h"

class Cube : public Rectangle
{
    public:
        Cube(int side);
        int CalculateArea();

    protected:

    private:
};


#endif // CUBE_H_INCLUDED
