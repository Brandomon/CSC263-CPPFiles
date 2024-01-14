#ifndef TESTSCORES_H_INCLUDED
#define TESTSCORES_H_INCLUDED

#include <iostream>
#include <iomanip>

using namespace std;

void GetGrades (double* scores, int size);          //Prompts the user to fill the array of user input size with test scores as doubles
double Average (double* scores, int size);          //Calculates the average of the array of the user input size
void DisplayGrades (double* scores, int size);      //Displays the formatted test scores of the array

#endif // TESTSCORES_H_INCLUDED
