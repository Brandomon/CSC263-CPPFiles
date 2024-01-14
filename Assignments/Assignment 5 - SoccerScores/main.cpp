#include "Player.h"

int main()
{
    const int TEAMSIZE = 12;            //Size of team for array of structure size
    int scoreTotal = 0;                 //Total score of all members of the team
    int highest = 0;                    //Index of player with highest score
    Player team[TEAMSIZE];              //Array of player structures of size TEAMSIZE

    GetTeamInfo(TEAMSIZE, team);

    cout << "\n\n" << endl;             //Moves input off of screen

    OutputTitle();

    OutputTeam(TEAMSIZE, team);

    scoreTotal = CalculateTotal(TEAMSIZE, team);

    OutputTotal(scoreTotal);

    highest = FindHighestScore(TEAMSIZE, team);

    ShowHighest(highest, team);

    return 0;
}
