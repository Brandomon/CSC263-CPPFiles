#ifndef CUBE2_H
#define CUBE2_H

#include "Square.h"

template <class T>
class Cube2 : public Square<T>
{
    public:
        Cube2(T side);
        T CalculateArea();

    protected:

    private:
};

template <class T>
Cube2<T>::Cube2(T side) : Square<T>(side)
{
    cout << "Cube2" << endl;
}

template <class T>
T Cube2<T>::CalculateArea()
{
    T area;

    area = 6 * (this->length * this->width);

    return area;
}
#endif // CUBE_H
