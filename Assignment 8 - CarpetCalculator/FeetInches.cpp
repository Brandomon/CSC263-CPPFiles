// Implementation file for the FeetInches class
#include <cstdlib>  // Needed for abs()
#include "FeetInches.h"

//************************************************************
// Definition of member function simplify. This function     *
// checks for values in the inches member greater than       *
// twelve or less than zero. If such a value is found,       *
// the numbers in feet and inches are adjusted to conform    *
// to a standard feet & inches expression. For example,      *
// 3 feet 14 inches would be adjusted to 4 feet 2 inches and *
// 5 feet -2 inches would be adjusted to 4 feet 10 inches.   *
//************************************************************

void FeetInches::simplify()
{
    const int INPERFT = 12;     //Constant for inches per foot

    if (inches >= INPERFT)
    {
        feet += (inches / INPERFT);
        inches = inches % INPERFT;
    }
    else if (inches < 0)
    {
        feet -= ((abs(inches) / INPERFT) + 1);
        inches = INPERFT - (abs(inches) % INPERFT);
    }
}

//**********************************************
// Overloaded binary + operator.               *
//**********************************************

FeetInches FeetInches::operator + (const FeetInches &right)
{
    FeetInches temp;

    temp.inches = inches + right.inches;
    temp.feet = feet + right.feet;
    temp.simplify();
    return temp;
}


//**********************************************
// Overloaded binary - operator.               *
//**********************************************

FeetInches FeetInches::operator - (const FeetInches &right)
{
    FeetInches temp;

    temp.inches = inches - right.inches;
    temp.feet = feet - right.feet;
    temp.simplify();
    return temp;
}

//*************************************************************
// Overloaded prefix ++ operator. Causes the inches member to *
// be incremented. Returns the incremented object.            *
//*************************************************************

FeetInches FeetInches::operator ++ ()
{
    ++inches;
    simplify();
    return *this;
}

//***************************************************************
// Overloaded postfix ++ operator. Causes the inches member to  *
// be incremented. Returns the value of the object before the   *
// increment.                                                   *
//***************************************************************

FeetInches FeetInches::operator ++ (int)
{
    FeetInches temp(feet, inches);

    inches++;
    simplify();
    return temp;
}

//************************************************************
// Overloaded > operator. Returns true if the current object *
// is set to a value greater than that of right.             *
//************************************************************

bool FeetInches::operator > (const FeetInches &right)
{
    bool status;

    if (feet > right.feet)
      status = true;
    else if (feet == right.feet && inches > right.inches)
      status = true;
    else
      status = false;

    return status;
}

//************************************************************
// Overloaded < operator. Returns true if the current object *
// is set to a value less than that of right.                *
//************************************************************

bool FeetInches::operator < (const FeetInches &right)
{
    bool status;

    if (feet < right.feet)
      status = true;
    else if (feet == right.feet && inches < right.inches)
      status = true;
    else
      status = false;

    return status;
}

//*************************************************************
// Overloaded == operator. Returns true if the current object *
// is set to a value equal to that of right.                  *
//*************************************************************

bool FeetInches::operator == (const FeetInches &right)
{
    bool status;

    if (feet == right.feet && inches == right.inches)
      status = true;
    else
      status = false;

    return status;
}

//*************************************************************
// Overloaded >= operator. Returns true if the current object *
// is set to a value equal or greater than that of right.     *
//*************************************************************

bool FeetInches::operator >= (const FeetInches &right)
{
    bool status;

    if (feet == right.feet && inches == right.inches || feet == right.feet && inches < right.inches || feet < right.feet)
      status = true;
    else
      status = false;

    return status;
}

//*************************************************************
// Overloaded <= operator. Returns true if the current object *
// is set to a value less than or equal to that of right.     *
//*************************************************************

bool FeetInches::operator <= (const FeetInches &right)
{
    bool status;

    if (feet == right.feet && inches == right.inches || feet == right.feet && inches > right.inches || feet > right.feet)
      status = true;
    else
      status = false;

    return status;
}

//*************************************************************
// Overloaded != operator. Returns true if the current object *
// is set to a value not equal to that of right.              *
//*************************************************************

bool FeetInches::operator != (const FeetInches &right)
{
    bool status;

    if (feet != right.feet && inches != right.inches || feet != right.feet || inches != right.inches)
      status = true;
    else
      status = false;

    return status;
}

//********************************************************
// Friend                                                *
// Overloaded << operator. Gives cout the ability to     *
// directly display FeetInches objects.                  *
//********************************************************

ostream &operator<<(ostream &strm, const FeetInches &obj)
{
    strm << obj.feet << " feet, " << obj.inches << " inches";
    return strm;
}

//********************************************************
// Friend                                                *
// Overloaded >> operator. Gives cin the ability to      *
// store user input directly into FeetInches objects.    *
//********************************************************

istream &operator >> (istream &strm, FeetInches &obj)
{
    // Prompt the user for the feet.
    cout << "Feet: ";
    strm >> obj.feet;

    // Prompt the user for the inches.
    cout << "Inches: ";
    strm >> obj.inches;

    // Normalize the values.
    obj.simplify();

    return strm;
}

//*************************************************************
// Conversion function to convert a FeetInches object         *
// to a double.                                               *
//*************************************************************

FeetInches::operator double()
{
    const double INPERFT = 12.0;     //Constant for inches per foot
    double temp = feet;

    temp += (inches / INPERFT);
    return temp;
}

//*************************************************************
// Conversion function to convert a FeetInches object         *
// to an int.                                                 *
//*************************************************************

FeetInches:: operator int()
{
    return feet;
}

//*************************************************************
// Multiplication function to multiply two FeetInches objects *
// by converting them to inches, calculating the area, and    *
// returns the answer as a simplified FeetInches object       *
//*************************************************************

FeetInches FeetInches::multiply(FeetInches right)
{
    FeetInches temp;            //Temporary FeetInches object to hold area
    const int INPERFT = 12;     //Constant integer for inches per foot calculations
    int tempInches = 0;         //Temp integer to hold calculated FeetInches object in inches
    int tempInches2 = 0;        //Temp integer to hold second calculated FeetInches object in inches
    int areaInches = 0;         //Area in inches for proper calculation

    //Convert both FeetInches objects to only inches
    tempInches = (feet * INPERFT) + inches;
    tempInches2 = (right.feet * INPERFT) + right.inches;

    //Calculate area in inches^2
    areaInches = tempInches * tempInches2;

    //Set temp FeetInches object to area in inches divided by 12
    temp.inches = areaInches / INPERFT;

    //Simplify temp to feet and inches
    temp.simplify();

    //Return temp
    return temp;
}
