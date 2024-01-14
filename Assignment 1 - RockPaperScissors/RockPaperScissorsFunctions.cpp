#include "RockPaperScissorsHeader.h"

int GetUserChoice()
{
    int userChoice;     //Integer value of the user's menu choice

    //Display menu choices to the user
    cout << "Rock, Paper, or Scissors?\n\n"
         << "1. Rock\n"
         << "2. Paper\n"
         << "3. Scissors\n" << endl;

    //Get user menu choice
    cout << "Enter choice: ";
    cin >> userChoice;

    //Display user choice
    DisplayChoice(userChoice);

    //Return the user choice
    return userChoice;
}

int GetComputerChoice()
{
    int compChoice; //Computer's random choice between min and max (inclusive)
    int a = 1;      //Min
    int b = 3;      //Max

    //Generate random number for computer's choice (1-3)
    srand(time(0));
    compChoice = (rand() % abs(b - a + 1) + a);

    //Return computer's choice
    return compChoice;
}

bool DetermineWinner(int userChoice, int compChoice)
{
    bool winner = false;    //Boolean value to flag if there was a winner

    //If user picked rock...
    if (userChoice == 1)
    {
        //and computer picked rock
        if (compChoice == 1)
        {
            cout << "\tDraw! Rock vs Rock!\n" << endl;
            winner = false;
        }
        //and computer picked paper
        else if (compChoice == 2)
        {
            cout << "\tComputer wins! Paper Covers Rock!" << endl;
            winner = true;
        }
        //and computer picked scissors
        else //compChoice == 3
        {
            cout << "\tYou Win!!! Rock beats Scissors!" << endl;
            winner = true;
        } //End if else
    } //End if

    //Else if user picked paper...
    else if (userChoice == 2)
    {
        //and computer picked rock
        if (compChoice == 1)
        {
            cout << "\tYou Win!!! Paper covers Rock!" << endl;
            winner = true;
        }
        //and computer picked paper
        else if (compChoice == 2)
        {
            cout << "\tDraw! Paper vs Paper!\n" << endl;
            winner = false;
        }
        //and computer picked scissors
        else //compChoice == 3
        {
            cout << "\tComputer wins! Scissors cuts Paper!" << endl;
            winner = true;
        } //End if else
    } //End if

    //Else if user picked scissors...
    else //userChoice == 3
    {
        //and computer picked rock
        if (compChoice == 1)
        {
            cout << "\tComputer wins! Rock breaks Scissors!" << endl;
            winner = true;
        }
        //and computer picked paper
        else if (compChoice == 2)
        {
            cout << "\tYou Win!!! Scissors cuts Paper!" << endl;
            winner = true;
        }
        //and computer picked scissors
        else //compChoice == 3
        {
            cout << "\tDraw! Scissors vs Scissors!\n" << endl;
            winner = false;
        } //End if else
    } //End else

    //Return if there was a winner
    return winner;
}
void DisplayChoice(int choice)
{
    //Display choice made
    cout << "\nChoice selected: " << choice << ", ";
    //If choice was rock
    if (choice == 1)
    {
        cout << "Rock." << endl;
    }
    //Else if choice was paper
    else if (choice == 2)
    {
        cout << "Paper." << endl;
    }
    //Else if choice was scissors
    else if (choice == 3)
    {
        cout << "Scissors." << endl;
    }
    //Else choice was invalid
    else //Choice is invalid
    {
        cout << "INVALID." << endl;
    }
}
void DisplayCompChoice(int choice)
{
    //Display choice made by computer
    cout << "\nComputer's choice: " << choice << ", ";
    //If choice was rock
    if (choice == 1)
    {
        cout << "Rock.\n" << endl;
    }
    //Else if choice was paper
    else if (choice == 2)
    {
        cout << "Paper.\n" << endl;
    }
    //Else choice was scissors
    else //choice == 3
    {
        cout << "Scissors.\n" << endl;
    }
}
