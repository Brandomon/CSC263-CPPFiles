#ifndef PERSONDATA_H_INCLUDED
#define PERSONDATA_H_INCLUDED
#include <iostream>
using namespace std;

class PersonData
{
    public:
        //Default Constructor
        PersonData();

        //Constructor with parameters for all data members
        PersonData(string last, string first, string add, string city, string state, string zip, string phone);

        //Destructor
        ~PersonData();

        //Accessor Functions
        string getLastName() const;
        string getFirstName() const;
        string getAddress() const;
        string getCity() const;
        string getState() const;
        string getZipcode() const;
        string getPhoneNum() const;

        //Mutator Functions
        void setLastName(string ln);
        void setFirstName(string fn);
        void setAddress(string a);
        void setCity(string c);
        void setState(string s);
        void setZipcode(string z);
        void setPhoneNum(string p);

    protected:

    private:
        string lastName;    //Person's last name as a string
        string firstName;   //Person's first name as a string
        string address;     //Person's address as a string
        string city;        //Person's city as a string
        string state;       //Person's state as a string
        string zipcode;     //Person's zipcode as a string
        string phoneNum;    //Person's phone number as a string

};

#endif // PERSONDATA_H_INCLUDED
