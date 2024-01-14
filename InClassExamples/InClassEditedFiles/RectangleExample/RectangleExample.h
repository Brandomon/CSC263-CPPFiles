#ifndef RECTANGLEEXAMPLE_H_INCLUDED
#define RECTANGLEEXAMPLE_H_INCLUDED

class RECTANGLE
{
    private:
        double length;
        double width;

    public:
        void SetLength(double l);
        void SetWidth(double w);
        double GetLength() const;
        double GetWidth() const;
        double GetArea() const;

};

#endif // RECTANGLEEXAMPLE_H_INCLUDED
