#include "FeetInches.h"
#include "RoomDimension.h"
#include "RoomCarpet.h"
#include <iomanip>
#include <iostream>
using namespace std;

/************************************************************\
* Program Name : CarpetCalculator
* Description : Gathers user inputs for the dimensions of a
*               room and the cost of carpet per square foot
*               before calculating and displaying the square
*               footage of the carpet needed and the total
*               cost of the carpet. The program will then
*               ask the user if they want to calculate the
*               cost of another carpet or end the program.
************************************************************/

int main()
{
    bool again = true;      //Boolean flag to allow the user to use the program again
    char choice = 'Y';      //User choice to use the calculator again or not
    int feet = 0;           //Integer input of feet for setting up FeetInches
    int inches = 0;         //Integer input of inches for setting up FeetInches
    double cost = 0.0;      //User input of cost for square footage of carpet as a double
    FeetInches roomLength;  //FeetInches object containing length of room
    FeetInches roomWidth;   //FeetInches object containing width of room
    RoomDimension myRoom;   //RoomDimension object containing room dimensions
    RoomCarpet myCarpet;    //RoomCarpet object containing carpet cost


    while (again == true)
    {
        //Get user inputs for room dimensions
        cout << "Welcome to the Carpet Cost Calculator" << endl;

        //Get user inputs for room length
        cout << "Enter the dimensions of the room in feet and inches" << endl;
        cout << "Enter the number of feet within the room's length : ";
        cin >> feet;
        cout << "Enter the number of inches within the room's length : ";
        cin >> inches;
        roomLength.setFeet(feet);
        roomLength.setInches(inches);

        //Get user inputs for room width
        cout << "Enter the number of feet within the room's width : ";
        cin >> feet;
        cout << "Enter the number of inches within the room's width : ";
        cin >> inches;
        roomWidth.setFeet(feet);
        roomWidth.setInches(inches);

        //Initialize instance of RoomDimension myRoom with length and width
        myRoom.SetLength(roomLength);
        myRoom.SetWidth(roomWidth);

        //Initialize instance of RoomCarpet myCarpet with myRoom
        myCarpet.SetRoomCarpet(myRoom);

        //Get user input of carpet cost
        cout << "Enter the cost of the carpet per square foot : $";
        cin >> cost;
        myCarpet.SetCarpetCost(cost);

        //Display formatted square footage and carpet cost
        cout << "\nCarpet Total Area : " << myRoom.CalculateArea() << " squared" << endl;
        cout << fixed << setprecision(2);
        cout << "Total Carpet Cost : $" << myCarpet.CalculateTotalCost() << endl << endl;

        //Get user choice of using the carpet calculator again
        cout << "Would  you like to calculate another room? (Y/N): ";
        cin >> choice;

        //While choice is not equal to 'y' 'Y' 'n' or 'N'
        while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n')
        {
            cout << "Error : Invalid input. Please enter a 'Y' or 'N'" << endl;
            cout << "\nWould  you like to calculate another room? (Y/N): ";
            cin >> choice;
        }
        //If choice is a 'y' or 'Y' set again to true
        if (choice == 'Y' || choice == 'y')
        {
            again = true;
            cout << endl;
        }

        //If choice is 'n' or 'N' set again to false
        else // if (choice == 'N' || choice == 'n')
            again = false;
    }
    return 0;
}
