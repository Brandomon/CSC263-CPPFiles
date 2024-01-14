#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include <iostream>
using namespace std;

template <class T>
class Rectangle
{
    protected:
        T length;
        T width;

    public:
        Rectangle(T length, T width);
        virtual T CalculateArea() = 0;
};

template <class T>
Rectangle<T>::Rectangle(T length, T width)
{
    cout << "Rectangle" << endl;
    this->length = length;
    this->width = width;
}
/*int Rectangle::CalculateArea()
{
    int area;

    area = length * width;

    return area;
}*/
#endif // RECTANGLE_H_INCLUDED
