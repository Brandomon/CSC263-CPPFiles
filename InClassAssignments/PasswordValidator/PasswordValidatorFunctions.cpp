#include "PasswordValidator.h"

bool ValidatePassword(char pw[], int length)
{
    int counter = 0;
    bool minlength = false;
    bool lower = false;
    bool upper = false;
    bool digit = false;

    for (counter = 0; counter < length; counter++)
    {
        if (length >= 6)
            minlength = true;

        if (isupper(pw[counter]))
            upper = true;

        if (islower(pw[counter]))
            lower = true;

        if (isdigit(pw[counter]))
            digit = true;
    }
    if (minlength == false)
        cout << "\nERROR! Password did not meet length requirement." << endl;

    if (lower == false)
        cout << "\nERROR! Password did not contain a lowercase letter." << endl;

    if (upper == false)
        cout << "\nERROR! Password did not contain an uppercase letter." << endl;

    if (digit == false)
        cout << "\nERROR! Password did not contain a numeric digit." << endl;

    if (minlength == false || lower == false || upper == false || digit == false)
        return false;
    else
        return true;
}
