#ifndef ROOMDIMENSION_H_INCLUDED
#define ROOMDIMENSION_H_INCLUDED
#include "FeetInches.h"

class RoomDimension : public FeetInches
{
    public:
        //Constructor
        RoomDimension();

        //Destructor
        ~RoomDimension();

        //Mutator Functions
        void SetWidth(FeetInches w);
        void SetLength(FeetInches l);

        //Accessor Functions
        FeetInches GetLength() const;
        FeetInches GetWidth() const;

        //Calculation Functions
        FeetInches CalculateArea();

    protected:

    private:
        FeetInches length;      //Room's length dimension
        FeetInches width;       //Room's width dimension
};


#endif // ROOMDIMENSION_H_INCLUDED
