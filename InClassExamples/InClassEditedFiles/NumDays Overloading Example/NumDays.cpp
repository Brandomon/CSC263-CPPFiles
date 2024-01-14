#include "NumDays.h"

NumDays::NumDays(int hours)
{
    this->hours = hours;
    this->days = 0;
    convert();
}

void NumDays::convert()
{
    this->hours = this->hours + days * 8;
    days = this->hours/8;
    this->hours = this->hours%8;
}

NumDays NumDays::operator+ (const NumDays& obj)
{
    int totalHours;

    totalHours = this->hours + (this->days*8) +
                            obj.hours + (obj.days*8);

    cout << "Total hours " << totalHours << endl;
    NumDays temp(totalHours);

    return temp;
}
NumDays NumDays::operator- (const NumDays& obj)
{
    int totalHours;

    totalHours = (this->hours + (this->days*8)) -
                         (obj.hours + (obj.days*8));

    cout << "Total hours " << totalHours << endl;
    NumDays temp(totalHours);

    return temp;
}
NumDays NumDays::operator++()
{
    hours++;
    convert();

    return *this;
}
NumDays NumDays::operator++(int) //POST
{
    NumDays temp(0);
    temp.hours = this->hours;
    temp.days = this->days;

    hours++;
    convert();

    return temp;
}
NumDays NumDays::operator--()
{
    hours--;
    convert();

    return *this;
}
NumDays NumDays::operator--(int)  //POST
{
    NumDays temp(0);
    temp.hours = this->hours;
    temp.days = this->days;

    hours--;
    convert();

    return temp;
}

ostream& operator<<(ostream& strm, const NumDays& obj)
{
    strm << "Hours is " << obj.hours << " Days is "
         << obj.days << endl;

    return strm;
}
istream& operator>>(istream& strm, NumDays& obj)
{
    cout << "Enter the number of hours ";
    strm>>obj.hours;
    obj.days = 0;
    obj.convert();
    return strm;
}
