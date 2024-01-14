#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string GetFilename();
void DisplayFileContent(string fileName);

int main()
{
    string fn;

    fn = GetFilename();

    DisplayFileContent(fn);

    return 0;
}

/******************************
* Function Name : GetFilename
* Description : Prompts user for the name of a file
*               and returns the filename
* Initial Algorithm :
*   Prompt user to enter the filename
*   Get line of input
*   Return the filename
*
******************************/
string GetFilename()
{
    string filename;

    cout << "Enter a file name :";
    getline(cin, filename);

    return filename;
}

/******************************
* Function Name : DisplayFileContent
* Description : Reads the string parameter as
*               the file name and opens the file
*               through fstream
*
******************************/
void DisplayFileContent(string fileName)
{
    fstream fileHandler;
    fileHandler.open(fileName, ios::in);
    string temp;
    int counter = 0;

    if (fileHandler)
    {
        while(getline(fileHandler, temp))
        {
            counter++;
            cout << temp << endl;
            if (counter%24 == 0)
            {
                cout << "\n\n\nPress enter to continue" << endl;
                char key;
                cin.get(key);
                //getline(cin, temp);
                //counter = 0;
            }
        }
        fileHandler.close();
    }
    else
    {
        cout << "File failed to open..." << endl;
    }
}
