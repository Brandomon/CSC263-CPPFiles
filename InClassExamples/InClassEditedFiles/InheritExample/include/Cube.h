#ifndef CUBE_H
#define CUBE_H

#include "../Rectangle.h"

class Cube : public Rectangle
{
    public:
        Cube(int side);
        int CalculateArea();

    protected:

    private:
};

#endif // CUBE_H
