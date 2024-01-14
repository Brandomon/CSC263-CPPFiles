#include "MyPrototypes.h"

void PrintInfo(int x, int y)
{
    cout << "Hello world!"
         << endl << "C++"
         << endl;

    cout << "The values you entered are " << x << " and " << y << endl;
}

void GetInput(int& value1, int& value2)
{
    cout << "Enter a value for value 1 : ";
    cin >> value1;
    cout << "Enter a value for value 2 : ";
    cin >> value2;
}

void RandomNumbers()
{
    int x, a, b;

    a = 1; //min
    b = 6; //max;

    for (int count = 0; count < 10; count++)
    {
        x = (rand() % abs(b - a + 1) + a);
        cout << x << endl;
    }
}

void FormatExample()
{
    const int SIZE = 10;
    float numbers[SIZE];
    int index;

    for (index = 0; index <= (SIZE - 1); index ++)
    {
        cin >> numbers[index];
    }

    cout << "The table of values is as follows\n";

    cout << fixed << showpoint << setprecision(2);                              //showpoint shows decimal no matter what (noshowpoint does opposite)
                                                                                //setprecision shows decimal to () decimal place
    cout << left << setw(10) << "Item" << setw(10) << "Value" << endl;

    for (index = 0; index <= (SIZE - 1); index ++)
    {
        cout << left << setw(10) << (index + 1)                                 //left justified
             << right << setw(10) << numbers[index] << endl;                    //right justified
    }

}
