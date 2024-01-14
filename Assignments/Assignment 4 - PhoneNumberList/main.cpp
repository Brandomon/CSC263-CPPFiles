#include "PhoneNumberList.h"

/*******************************************************************************
* Program Name : CorporateSalesRecords
* Description : Prompts user to enter a string to search for within the directory
*               which has already been hard-coded before returning all array elements
*               containing the search string.
* Additional Functions :
*               void SearchPhoneBook
* Refined Algorithm :
* BEGIN PhoneNumberList
*   Declare and initialize string array of names and numbers
*   SearchPhoneBook
* END PhoneNumberList
*******************************************************************************/
int main()
{
    const int SIZE = 10;                                    //Size of string array containing phone book
    string phoneBook[SIZE] = {"Renee Javens, 678-1223",     //Array of strings containing individual's names and phone numbers
                              "Joe Looney, 586-0097",
                              "Geri Palmer, 223-8787",
                              "Lynn Presnell, 887-1212",
                              "Bill Wolfe, 223-8878",
                              "Sam Wiggins, 486-0998",
                              "Bob Kain, 586-8712",
                              "Tim Haynes, 586-7676",
                              "John Johnson, 223-9037",
                              "Ron Palmer, 486-2783"};

    SearchPhoneBook(phoneBook, SIZE);

    return 0;
}
