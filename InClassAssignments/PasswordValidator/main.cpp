#include "PasswordValidator.h"

int main()
{
    int length;             //Length of the string input by user
    int counter;            //Counter for loop to store string into char array
    string password;        //String input from user of password
    bool secure = false;    //Boolean flag to indicate a secure password

    //Repeat prompt if password isn't valid
    while (secure == false)
    {
        //Prompt user for password
        cout << "\nEnter a password that is at least 6 characters long that contains";
        cout << "\nat least one uppercase letter, one lowercase letter, and one digit : ";
        cin >> password;

        //Get length of the password and store
        length = password.length();

        //Declare char array of user input string size
        char pass[length];

        //Initialize the elements of the array with each char from password
        for (counter = 0; counter < length; counter++)
        {
            pass[counter] = password.at(counter);
        }

        //Validate that password is secure enough
        secure = ValidatePassword(pass, length);
    }

    //Display that the password was valid
    cout << "\nPassword is valid." << endl;

    return 0;
}
