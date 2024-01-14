#ifndef CUSTOMERDATA_H_INCLUDED
#define CUSTOMERDATA_H_INCLUDED
#include "PersonData.h"

class CustomerData : public PersonData
{
    public:
        //Default Constructor
        CustomerData();

        //Constructor with parameters for all data members of the two classes
        CustomerData(string l, string f, string a, string c, string s, string z, string p, int cn, bool ml);

        //Destructor
        ~CustomerData();

         //Accessor Functions
        int getCustomerNumber() const;
        bool getMailingList() const;

        //Mutator Functions
        void setCustomerNumber(int n);
        void setMailingList(bool ml);

    protected:

    private:
        int customerNumber;
        bool mailingList;
};


#endif // CUSTOMERDATA_H_INCLUDED
