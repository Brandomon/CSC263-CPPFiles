#include <iostream>

using namespace std;

void DefaultFunction(int x, int y, int w = 22, double z = 33.3);

int main()
{
    DefaultFunction(3, 4, 5, 6);
    cout << endl;
    DefaultFunction(3, 4, 5);
    cout << endl;
    DefaultFunction(3, 4);
    return 0;
}

void DefaultFunction(int x, int y, int w, double z)
{
    cout << "w is " << w << endl;
    cout << "z is " << z << endl;
}
