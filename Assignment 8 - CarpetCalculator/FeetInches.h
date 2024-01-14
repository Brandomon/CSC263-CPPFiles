// Specification file for the FeetInches class
#ifndef FEETINCHES_H_INCLUDED
#define FEETINCHES_H_INCLUDED

#include <iostream>
using namespace std;

class FeetInches; // Forward Declaration

// Function Prototypes for Overloaded Stream Operators
ostream &operator << (ostream &, const FeetInches &);
istream &operator >> (istream &, FeetInches &);

// The FeetInches class holds distances or measurements
// expressed in feet and inches.

class FeetInches
{
    public:
        // Constructor
        FeetInches(int f = 0, int i = 0)
        {
            feet = f;
            inches = i;
            simplify();
        }

        // Copy Constructor
        FeetInches(const FeetInches &right)
        {
            feet = right.feet;
            inches = right.inches;
            simplify();
        }

        // Mutator functions
        void setFeet(int f)
        {
            feet = f;
        }

        void setInches(int i)
        {
            inches = i;
            simplify();
        }

        // Accessor functions
        int getFeet() const
        {
            return feet;
        }

        int getInches() const
        {
            return inches;
        }

        // Overloaded operator functions
        FeetInches operator + (const FeetInches &);
        FeetInches operator - (const FeetInches &);
        FeetInches operator ++ ();    // Prefix ++
        FeetInches operator ++ (int); // Postfix ++
        bool operator > (const FeetInches &);
        bool operator < (const FeetInches &);
        bool operator == (const FeetInches &);
        bool operator >= (const FeetInches &);  //Overloaded operator to return a boolean if FeetInches is greater or equal to the right FeetInches object
        bool operator <= (const FeetInches &);  //Overloaded operator to return a boolean if FeetInches is less than or equal to the right FeetInches object
        bool operator != (const FeetInches &);  //Overloaded operator to return a boolean if FeetInches is not equal to the right FeetInches object

        // Friends
        friend ostream &operator << (ostream &, const FeetInches &);
        friend istream &operator >> (istream &, FeetInches &);

        // Conversion functions
        operator double();
        operator int();

        //Multiply function
        FeetInches multiply(FeetInches right);  //Function to multiply two FeetInches objects

    protected:

    private:
        int feet;        // To hold a number of feet
        int inches;      // To hold a number of inches
        void simplify(); // Defined in FeetInches.cpp
};

#endif // FEETINCHES_H_INCLUDED
