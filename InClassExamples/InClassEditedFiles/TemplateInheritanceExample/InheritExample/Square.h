#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED
#include "Rectangle.h"

template <class T>
class Square : public Rectangle<T>
{
    protected:

    public:
        Square(T side);
        T CalculateArea();
};

template <class T>
Square<T>::Square(T side) : Rectangle<T>(side, side)
{
    cout << "Square" << endl;
}

template <class T>
T Square<T>::CalculateArea()
{
    T area;

    area = this->length * this->length;

    return area;
}

#endif // SQUARE_H_INCLUDED
