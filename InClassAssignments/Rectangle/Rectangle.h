#ifndef RECTANGLEEXAMPLE_H_INCLUDED
#define RECTANGLEEXAMPLE_H_INCLUDED

#include <iostream>

using namespace std;

class Rectangle
{
    private:
        double length;
        double width;
        double area;
        void CalculateArea();
    public:
        Rectangle();
        Rectangle(double len, double wid);
      /*Rectangle(double len = 0, double wid = 0);*/ //Default Parameters works as default constructor
        ~Rectangle();
        void SetLength(double l);
        void SetWidth(double w);
        double GetLength() const;
        double GetWidth() const;
        double GetArea() const;
};

#endif // RECTANGLEEXAMPLE_H_INCLUDED
