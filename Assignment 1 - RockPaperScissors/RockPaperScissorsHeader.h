#ifndef ROCKPAPERSCISSORSHEADER_H_INCLUDED
#define ROCKPAPERSCISSORSHEADER_H_INCLUDED

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>      //for random number generator
#include <ctime>        //for current system time to seed random number generator

using namespace std;

int GetUserChoice();
int GetComputerChoice();
bool DetermineWinner(int userChoice, int compChoice);
void DisplayChoice(int choice);
void DisplayCompChoice(int choice);

#endif // ROCKPAPERSCISSORSHEADER_H_INCLUDED
