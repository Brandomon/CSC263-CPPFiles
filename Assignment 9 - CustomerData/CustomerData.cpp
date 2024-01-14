#include "CustomerData.h"

//Default Constructor
CustomerData::CustomerData()
{
    customerNumber = 0;
    mailingList = false;
}

//Constructor with parameters for all data members
CustomerData::CustomerData(string l, string f, string a, string c, string s, string z, string p, int cn, bool ml)
{
    //Set PersonData info
    setLastName(l);
    setFirstName(f);
    setAddress(a);
    setCity(c);
    setState(s);
    setZipcode(z);
    setPhoneNum(p);

    //Set CustomerData info
    customerNumber = cn;
    mailingList = ml;
}

//Destructor
CustomerData::~CustomerData()
{
    //dtor
}

 //Accessor Functions
int CustomerData::getCustomerNumber() const
{
    return customerNumber;
}

bool CustomerData::getMailingList() const
{
    return mailingList;
}

//Mutator Functions
void CustomerData::setCustomerNumber(int n)
{
    customerNumber = n;
}

void CustomerData::setMailingList(bool ml)
{
    mailingList = ml;
}
