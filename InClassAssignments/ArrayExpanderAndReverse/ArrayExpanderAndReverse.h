#ifndef ARRAYEXPANDERANDREVERSE_H_INCLUDED
#define ARRAYEXPANDERANDREVERSE_H_INCLUDED

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>      //for random number generator
#include <ctime>        //for current system time to seed random number generator

using namespace std;

int* ArrayExpander(int* data, int size);
int* ArrayReverse(int* data, int size);
void DisplayGrades(int* data, int size);

#endif // ARRAYEXPANDERANDREVERSE_H_INCLUDED
