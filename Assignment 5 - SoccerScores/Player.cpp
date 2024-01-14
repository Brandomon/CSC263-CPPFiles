#include "Player.h"

/************************************************************
* Function Name : GetTeamInfo
* Description : Prompts the user to enter the player information
*               for the entire team of TEAMSIZE.
* Initial Algorithm :
*   FOR each structure within the array
*       GetPlayerInfo
*   END FOR
************************************************************/
void GetTeamInfo(const int TEAMSIZE, Player team[])
{
    int index = 0;                      //Counter for index of array loop

    for (index = 0; index < TEAMSIZE; index++)
    {
        GetPlayerInfo(team[index]);
    }
}

/************************************************************
* Function Name : GetPlayerInfo
* Description : Prompts the user to enter the player information
*               for an individual player.
* Initial Algorithm :
*   Prompt user for player name
*   Get name
*   WHILE numCheck is false
*       Prompt user for player jersey number
*       Get jersey number
*       IF jersey number is positive
*           numCheck is true
*       ELSE jersey number is negative
*           numCheck is false
*           Output error message
*       END IF ELSE
*   END WHILE
*   WHILE pointCheck is false
*       Prompt user for player points scored
*       Get points scored
*       IF points scored is positive
*           pointCheck is true
*       ELSE points scored is negative
*           pointCheck is false
*           Output error message
*       END IF ELSE
*   END WHILE
************************************************************/
void GetPlayerInfo(Player& person)
{
    bool numCheck = false;              //Flag for input of positive integer for number
    bool scoreCheck = false;            //Flag for input of positive integer for scores

    cout << "Enter player name : ";
    getline(cin, person.name);

    while (numCheck == false)
    {
        cout << "Enter player number : ";
        cin >> person.number;
        cin.ignore();

        if (person.number >= 0)
            numCheck = true;

        else//person.number is negative number - set flag to false for redundancy
        {
            numCheck = false;
            cout << "ERROR: Only positive integers are accepted" << endl << endl;
        }
    }

    while (scoreCheck == false)
    {
        cout << "Enter player scores : ";
        cin >> person.scores;
        cin.ignore();

        if (person.scores >= 0)
            scoreCheck = true;

        else//person.scores is a negative number - set flag to false for redundancy
        {
            scoreCheck = false;
            cout << "ERROR: Only positive integers are accepted" << endl << endl;
        }
    }
}

/************************************************************
* Function Name : OutputTitle
* Description : Outputs the formatted title of player name,
*               jersey number, points scored, and a border
*               line of '-' characters.
* Initial Algorithm :
*   Display "Player Name", "Jersey Number", and "Points Scored"
*   Output line of '-' characters
************************************************************/
void OutputTitle()
{
    cout << left << setw(COL) << "Player Name" <<
                    setw(COL) << "Jersey Number" <<
                    setw(COL) << "Points Scored" << endl;
    cout << setfill('-');
    cout << setw(COL * 3) << "-" << endl;
    cout << setfill (' ');
}

/************************************************************
* Function Name : ShowInfo
* Description : Outputs the formatted information of an
*               individual player.
* Initial Algorithm :
*   Display player's name, number, and scores
************************************************************/
void ShowInfo(const Player& person)
{
    cout << setw(COL) << person.name <<
            setw(COL) << person.number <<
            setw(COL) << person.scores << endl;
}

/************************************************************
* Function Name : OutputTeam
* Description : Outputs the formatted information of the entire
*               team of players.
* Initial Algorithm :
*   FOR each structure within the array
*       ShowInfo of team at index
*   END FOR
*   Output line of '-' characters
************************************************************/
void OutputTeam(const int TEAMSIZE, const Player team[])
{
    int index = 0;                      //Counter for index of array loop

    for (index = 0; index < TEAMSIZE; index++)
    {
        ShowInfo(team[index]);
    }
    cout << setfill('-');
    cout << setw(COL * 3) << "-" << endl;
    cout << setfill (' ');
}

/************************************************************
* Function Name : CalculateTotal
* Description : Calculates the total points scored by all of
*               the players of the team and returns the total.
* Initial Algorithm :
*   FOR each structure within the array
*       Add scores into total
*   END FOR
*   Return total
************************************************************/
int CalculateTotal(const int TEAMSIZE, const Player team[])
{
    int index = 0;                      //Counter for index of array loop
    int total = 0;                      //Total number of points within all scores

    for (index = 0; index < TEAMSIZE; index++)
    {
        total += team[index].scores;
    }

    return total;
}

/************************************************************
* Function Name : OutputTotal
* Description : Outputs the formatted team score total.
* Initial Algorithm :
*   Display team score total
************************************************************/
void OutputTotal(int total)
{
    cout << "\n" << setw(COL) << "Team Score Total : " << total << endl;
}

/************************************************************
* Function Name : FindHighestScore
* Description : Finds the highest score within the structure
*               array and returns the index of the player with
*               the highest score.
* Initial Algorithm :
*   FOR each structure within the array
*       IF score at index is greater than score at highest
*           highest equals index
*       END IF
*   END FOR
*   Return highest
************************************************************/
int FindHighestScore(const int TEAMSIZE, const Player team[])
{
    int index = 0;                      //Counter for index of array loop
    int highest = 0;                    //Index of highest player scores within array

    for (index = 1; index < TEAMSIZE; index ++)
    {
        if(team[index].scores > team[highest].scores)
        {
            highest = index;
        }
    }

    return highest;
}

/************************************************************
* Function Name : ShowHighest
* Description : Outputs the formatted highest scoring player's
*               name, jersey number, and points scored.
* Initial Algorithm :
*   Display "Highest Scoring Player" title
*   Display formatted player information of highest scoring player
************************************************************/
void ShowHighest(int highest, const Player team[])
{
    cout << "\n" << setw(COL) << "" << "***Highest Scoring Player***\n" << endl;

    OutputTitle();

    cout << setw(COL) << team[highest].name <<
            setw(COL) << team[highest].number <<
            setw(COL) << team[highest].scores << endl;
}
