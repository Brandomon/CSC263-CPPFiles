#include <iostream>

using namespace std;

//Function Prototype
void PrintInfo(int x, int y);
void GetInput(int& value1, int& value2);

int main()
{
    int x = -99, y = 88;

    GetInput(x, y);

    PrintInfo(x, y);

    return 0;
}

void PrintInfo(int x, int y)
{
    cout << "Hello world!"
         << endl << "C++"
         << endl;

    cout << "The values you entered are " << x << " and " << y << endl;
}

void GetInput(int& value1, int& value2)
{
    cout << "Enter value 1 : ";
    cin >> value1;
    cout << "Enter value 2 : ";
    cin >> value2;

}
