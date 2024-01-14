#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int COL = 30;         //Used with setw for formatting player data output

struct Player
{
    string name;            //Player name
    int number;             //Player jersey number
    int scores;             //Player points scored
};

void GetTeamInfo(const int TEAMSIZE, Player team[]);            //Prompts user to input name, number, and scores for each player on the team
void GetPlayerInfo(Player& person);                             //Prompts user to input name, number, and score for individual player
void OutputTitle();                                             //Outputs formatted title for player name, number, and score
void ShowInfo(const Player& person);                            //Outputs formatted information of individual player
void OutputTeam(const int TEAMSIZE, const Player team[]);       //Outputs formatted information of every player on the team
int CalculateTotal(const int TEAMSIZE, const Player team[]);    //Calculates total number of points scored by every player on the team and returns the total
void OutputTotal(int total);                                    //Outputs the formatted total points
int FindHighestScore(const int TEAMSIZE, const Player team[]);  //Finds the highest score within the structure array and returns the index
void ShowHighest(int highest, const Player team[]);             //Outputs the player info of the highest score found within the structure array

#endif // PLAYER_H_INCLUDED
