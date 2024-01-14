#include "NumDays.h"

using namespace std;

int main()
{
    NumDays rich(12); // 1 day 4 hours
    NumDays mary(22); // 2 days 6 hours

    cout << rich++ << endl;

    cout << rich << endl;

    cout << ++mary << endl;
    cout << mary << endl;

    cout << "Doing addition" << endl;
    NumDays total = rich + mary;

    cout << total << endl;

    cout << "Doing subtraction" << endl;
    total = mary - rich;

    cout << total << endl;

    cout << "Doing cin to rich" << endl;
    cin >> rich;
    cout << rich << endl;
    return 0;
}
