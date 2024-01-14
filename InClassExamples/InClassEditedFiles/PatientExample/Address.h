#ifndef ADDRESS_H_INCLUDED
#define ADDRESS_H_INCLUDED

#include <iostream>
#include <iomanip>
using namespace std;

class Address
{
    public:
        Address(string address, string city, string state, string zip,
                string country = "");
        void DisplayAddress();
    private:
        string address;
        string city;
        string state;
        string zip;
        string country;
};

#endif // ADDRESS_H_INCLUDED
