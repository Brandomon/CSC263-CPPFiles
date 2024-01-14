#include "RockPaperScissorsHeader.h"

int main()
{
    int userChoice = 0;
    int compChoice = 0;
    bool win = false;
    char again = 'Y';

    //Keep playing when user chooses to play again
    while (again == 'Y' || again == 'y')
    {
        //Reset win to false to continue
        win = false;

        //Keep game playing until there is a winner
        while (win == false)
        {
            //Create random number between 1 and 3 for computer's choice
            compChoice = GetComputerChoice();

            //Prompt user for choice
            userChoice = GetUserChoice();
            while (userChoice > 3 || userChoice < 1)
            {
                //Invalid user input prompt and retry for input
                cout << "\nPlease enter a number between 1 and 3\n" << endl;
                userChoice = GetUserChoice();
            }

            //Display computer's choice
            DisplayCompChoice(compChoice);

            //Indicate winner
            win = DetermineWinner(userChoice, compChoice);
            //If there was a winner output message
            if (win == true)
            {
                cout << "\tCONGRATULATIONS TO THE WINNER!\n" << endl;
            } //End if
        } //End while

        //Prompt user to play again
        cout << "Would you like to play again (Y/N)? : ";
        cin >> again;
        cout << endl;
        while (again != 'y' && again != 'Y' && again != 'n' && again != 'N')
        {
            cout << "INVALID! Please enter a \"Y\" for yes or an \"N\" for no\n\n"
                 << "Would you like to play again (Y/N)? : ";
            cin >> again;
        }
    }
    return 0;
}
