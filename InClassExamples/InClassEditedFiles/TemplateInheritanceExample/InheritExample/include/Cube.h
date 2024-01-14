#ifndef CUBE_H
#define CUBE_H

#include "../Rectangle.h"

template <class T>
class Cube : public Rectangle<T>
{
    public:
        Cube(T side);
        T CalculateArea();

    protected:

    private:
};

template <class T>
Cube<T>::Cube(T side) : Rectangle<T>(side, side)
{
    cout << "Cube2" << endl;
}

template <class T>
T Cube<T>::CalculateArea()
{
    T area;

    area = 6 * (this->length * this->length);

    return area;
}

#endif // CUBE_H
