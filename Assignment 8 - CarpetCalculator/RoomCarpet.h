#ifndef ROOMCARPET_H_INCLUDED
#define ROOMCARPET_H_INCLUDED
#include "RoomDimension.h"

class RoomCarpet : public RoomDimension
{
    public:
        //Constructor
        RoomCarpet();

        //Destructor
        ~RoomCarpet();

        //Mutator Functions
        void SetRoomCarpet(RoomDimension);
        void SetCarpetCost(double c);

        //Accessor Functions
        double GetCarpetCost() const;

        //Calculation Functions
        double CalculateTotalCost() const;

    protected:

    private:
        double carpetCost;      //Cost of carpet per square foot
        RoomDimension myRoom;   //RoomDimension attribute for RoomCarpet
};

#endif // ROOMCARPET_H_INCLUDED
