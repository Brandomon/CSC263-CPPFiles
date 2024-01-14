#include "Address.h"

Address::Address(string address, string city, string state, string zip, string country)
{
    this->address = address;
    this->city = city;
    this->state = state;
    this->zip = zip;
    this->country = country;
}

void Address::DisplayAddress()
{
    cout << setw(15) << "Address:" << setw(30) << address << " " << city
        << " " << state << " " << zip << endl;
}
