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
    cout << setw(25) << "Address: " << address << ", "
                     << city << ", " << state << ", " << zip << endl;
}
