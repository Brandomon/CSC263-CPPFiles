#include <iostream>
#include <fstream>

using namespace std;

struct student
{
    char name[20];
    int id;
    double gpa;
};

void DisplayStudent(student& stu);


int main()
{
    student stu1 = {"Brandon LaPointe", 123, 3.5};
    student stu2 = {"Tom Cruise", 124, 3.2};
    student stu3 = {"Ricky Bobby", 125, 2.8};
    student stu4 = {"Ken Rockwell", 126, 2.6};

    fstream output;

    output.open("student.dat", ios::out | ios::binary);

    output.write(reinterpret_cast<char *>(&stu1), sizeof(stu1));
    output.write(reinterpret_cast<char *>(&stu2), sizeof(stu2));
    output.write(reinterpret_cast<char *>(&stu3), sizeof(stu3));
    output.write(reinterpret_cast<char *>(&stu4), sizeof(stu4));

    output.close();

    fstream input;
    student new1;
    student new2;
    student new3;
    student new4;
    student temp;

    input.open("student.dat", ios::in | ios::binary);

    input.read(reinterpret_cast<char *>(&new1),
                            sizeof(student));
    input.read(reinterpret_cast<char *>(&new2),
                            sizeof(student));
    input.read(reinterpret_cast<char *>(&new3),
                            sizeof(student));
    input.read(reinterpret_cast<char *>(&new4),
                            sizeof(student));

    //Needs another read that signifies end of file
    if(!input)
        cout << "At end of file" << endl;

    int recordNumber = 2;
    DisplayStudent(new3);
    //Move to the start of the file
    input.clear();
    input.seekg(0L, ios::beg);
    input.seekg(sizeof(student) * (recordNumber - 1), ios::beg);

    input.read(reinterpret_cast<char *>(&temp), sizeof(student));
    DisplayStudent(temp);
    cout << input.tellg() << endl;
    cout << sizeof(student) << endl;

    input.read(reinterpret_cast<char *>(&temp), sizeof(student));
    DisplayStudent(temp);
    cout << input.tellg() << endl;
    cout << sizeof(student) << endl;


/*  cout << "Name : " << new3.name << endl;
    cout << "GPA : " << new3.gpa << endl;
    cout << "ID : " << new3.id << endl; */

/*  cout << sizeof(int) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(stu1.name) << endl;
    cout << sizeof(stu1) << endl;   */

/*  cout << sizeof(stu1) << endl;
    cout << sizeof(stu2) << endl;
    cout << sizeof(stu3) << endl;
    cout << sizeof(stu4) << endl;   */

    return 0;
}

void DisplayStudent(student& stu)
{
    cout << "Name : " << stu.name << endl;
    cout << "GPA : " << stu.gpa << endl;
    cout << "ID : " << stu.id << endl;
}
