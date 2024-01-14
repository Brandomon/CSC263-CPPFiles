#ifndef ADDRESS_H
#define ADDRESS_H

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

#endif // ADDRESS_H
