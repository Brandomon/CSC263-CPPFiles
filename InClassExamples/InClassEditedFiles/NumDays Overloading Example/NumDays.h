#ifndef NUMDAYS_H_INCLUDED
#define NUMDAYS_H_INCLUDED
#include <iostream>
using namespace std;

class NumDays
{
    private:
        int hours;
        int days;
        void convert();

    public:
        NumDays(int hours);

        NumDays operator+ (const NumDays& obj);
        NumDays operator- (const NumDays& obj);
        NumDays operator++();
        NumDays operator++(int);    //POST
        NumDays operator--();
        NumDays operator--(int);    //POST

        friend ostream& operator<<(ostream& strm, const NumDays& obj);
        friend istream& operator>>(istream& strm, NumDays& obj);

};


#endif // NUMDAYS_H_INCLUDED
