#include "PersonData.h"

//Default Constructor
PersonData::PersonData()
{
    lastName = "";
    firstName = "";
    address = "";
    city = "";
    state = "";
    zipcode = "";
    phoneNum = "";
}

//Constructor with parameters for all data members
PersonData::PersonData(string l, string f, string a, string c, string s, string z, string p)
{
    lastName = l;
    firstName = f;
    address = a;
    city = c;
    state = s;
    zipcode = z;
    phoneNum = p;
}

//Destructor
PersonData::~PersonData()
{
    //dtor
}

//Accessor Functions
string PersonData::getLastName() const
{
    return lastName;
}

string PersonData::getFirstName() const
{
    return firstName;
}

string PersonData::getAddress() const
{
    return address;
}

string PersonData::getCity() const
{
    return city;
}

string PersonData::getState() const
{
    return state;
}

string PersonData::getZipcode() const
{
    return zipcode;
}

string PersonData::getPhoneNum() const
{
    return phoneNum;
}

//Mutator Functions
void PersonData::setLastName(string ln)
{
    lastName = ln;
}

void PersonData::setFirstName(string fn)
{
    firstName = fn;
}

void PersonData::setAddress(string a)
{
    address = a;
}

void PersonData::setCity(string c)
{
    city = c;
}

void PersonData::setState(string s)
{
    state = s;
}

void PersonData::setZipcode(string z)
{
    zipcode = z;
}

void PersonData::setPhoneNum(string p)
{
    phoneNum = p;
}
