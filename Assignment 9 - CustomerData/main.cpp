#include "PersonData.h"
#include "CustomerData.h"

#include <iostream>
#include <iomanip>
using namespace std;

/***************************************************************\
* Program Name : CustomerData                                   *
* Description : Gathers user inputs for two CustomerData        *
*   objects, using two separate constructors to instantiate     *
*   the two CustomerData objects. The program will then call    *
*   a function DisplayCustomer to format the output of each     *
*   CustomerData object and display them in order, listing      *
*   the customer index number (NOT CustomerData customerNumber) *
*   within the title of each formatted object output.           *
\***************************************************************/

void DisplayCustomer(CustomerData* c, int &custIndex);      //Displays a formatted CustomerData object sent as a pointer through the parameters

int main()
{
    string last;                //User input of customer's last name as a string
    string first;               //User input of customer's first name as a string
    string address;             //User input of customer's address as a string
    string city;                //User input of customer's city as a string
    string state;               //User input of customer's state as a string
    string zip;                 //User input of customer's zip as a string
    string phone;               //User input of customer's phone as a string
    int custNum;                //User input of customer's customer number as an integer
    bool mailList;              //Boolean value of whether or not the customer is on the mailing list
    char choice;                //User input of choice to be on the mailing list as a char
    CustomerData customer1;     //CustomerData object of customer1
    int custIndex = 0;          //Customer index for outputting formatted CustomerData information

    //Get customer 1's information from user
    cout << "Enter the information for customer #1: " << endl;

    //Get customer 1's last name from user
    cout << "Enter customer #1's last name : ";
    getline(cin, last);
    customer1.setLastName(last);

    //Get customer 1's first name from user
    cout << "Enter customer #1's first name : ";
    getline(cin, first);
    customer1.setFirstName(first);

    //Get customer 1's address from user
    cout << "Enter customer #1's address : ";
    getline(cin, address);
    customer1.setAddress(address);

    //Get customer 1's city from user
    cout << "Enter customer #1's city : ";
    getline(cin, city);
    customer1.setCity(city);

    //Get customer 1's state from user
    cout << "Enter customer #1's state : ";
    getline(cin, state);
    customer1.setState(state);

    //Get customer 1's zipcode from user
    cout << "Enter customer #1's zipcode : ";
    getline(cin, zip);
    customer1.setZipcode(zip);

    //Get customer 1's phone number from user
    cout << "Enter customer #1's phone number : ";
    getline(cin, phone);
    customer1.setPhoneNum(phone);

    //Get customer 1's customer number from user
    cout << "Enter customer #1's customer number : ";
    cin >> custNum;
    customer1.setCustomerNumber(custNum);

    //Get customer 1's choice of mailing list from user
    cout << "Enter customer #1's choice to be on the mailing list(Y/N) : ";
    cin >> choice;
    cin.ignore();

    //WHILE choice is not valid, prompt user to enter choice as char
    while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n')
    {
        cout << "Error: Invalid input. Please enter a 'Y' or 'N'" << endl;
        cout << "Enter customer #2's choice to be on the mailing list(Y/N) : ";
        cin >> choice;
        cin.ignore();
    }

    //IF choice is a 'Y' or 'y' set mailList bool to true
    if (choice == 'Y' || choice == 'y')
        mailList = true;

    //ELSE set mailList bool to false
    else
        mailList = false;

    //Set customer 1 mailing list
    customer1.setMailingList(mailList);

    //Output empty line
    cout << endl;

    //Gather customer 2 information from user
    cout << "Enter the information for customer #2: " << endl;

    //Get customer 2's last name from user
    cout << "Enter customer #2's last name : ";
    getline(cin, last);

    //Get customer 2's first name from user
    cout << "Enter customer #2's first name : ";
    getline(cin, first);

    //Get customer 2's address from user
    cout << "Enter customer #2's address : ";
    getline(cin, address);

    //Get customer 2's city from user
    cout << "Enter customer #2's city : ";
    getline(cin, city);

    //Get customer 2's state from user
    cout << "Enter customer #2's state : ";
    getline(cin, state);

    //Get customer 2's zipcode from user
    cout << "Enter customer #2's zipcode : ";
    getline(cin, zip);

    //Get customer 2's phone number from user
    cout << "Enter customer #2's phone number : ";
    getline(cin, phone);

    //Get customer 2's customer number from user
    cout << "Enter customer #2's customer number : ";
    cin >> custNum;

    //Get customer 2's choice of mailing list from user
    cout << "Enter customer #2's choice to be on the mailing list(Y/N) : ";
    cin >> choice;
    cin.ignore();

    //WHILE choice is not valid, prompt user to enter choice as char
    while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n')
    {
        cout << "Error: Invalid input. Please enter a 'Y' or 'N'" << endl;
        cout << "Enter customer #2's choice to be on the mailing list(Y/N) : ";
        cin >> choice;
        cin.ignore();
    }

    //IF choice is a 'Y' or 'y' set mailList bool to true
    if (choice == 'Y' || choice == 'y')
        mailList = true;

    //ELSE set mailList bool to false
    else
        mailList = false;

    //Create instance of customer2 using input data as parameters for second constructor
    CustomerData customer2(last, first, address, city, state, zip, phone, custNum, mailList);

    //Display Customer 1
    DisplayCustomer(&customer1, custIndex);

    //Display Customer 2
    DisplayCustomer(&customer2, custIndex);

    //Delete customer1
    delete &customer1;

    //Delete customer
    delete &customer2;

    return 0;
}

/***********************************************************************\
* DisplayCustomer function which takes in a pointer to a CustomerData   *
* object and custIndex by reference to output a formatted title of the  *
* customer number (NOT CustomerData customerNumber) along with the      *
* formatted data of the CustomerData object sent through the parameters *
\***********************************************************************/

void DisplayCustomer(CustomerData* c, int &custIndex)
{
    //Function Constants
    const int FMT = 12;     //Used with setw to format output

    //Increment custIndex to match number of customer being displayed (NOT CustomerData CustomerNumber)
    custIndex++;

    //Display formatted title of customer
    cout << endl;
    cout << "==============================" << endl;
    cout << "|        Customer #" << custIndex << "         |" << endl;     //setw was not wanting to work for me here on customer2 but worked on customer1 so I formatted the output manually
    cout << "==============================" << endl;

    //Display formatted CustomerData
    cout << setw(FMT) << "Last Name" << " : " << c->getLastName() << endl;
    cout << setw(FMT) << "First Name" << " : " << c->getFirstName() << endl;
    cout << setw(FMT) << "Address" << " : " << c->getAddress() << endl;
    cout << setw(FMT) << "City" << " : " << c->getCity() << endl;
    cout << setw(FMT) << "State" << " : " << c->getState() << endl;
    cout << setw(FMT) << "ZIP" << " : " << c->getZipcode() << endl;
    cout << setw(FMT) << "Customer #" << " : " << c->getCustomerNumber() << endl;

    //IF mailingList bool is true display yes
    if (c->getMailingList() == 1)
        cout << setw(FMT) << "Mailing List : Yes" << endl;

    //ELSE display "No" to mailing list
    else
        cout << setw(FMT) << "Mailing List : No" << endl;
}
