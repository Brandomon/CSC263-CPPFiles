#include "Patient.h"
#include "Procedure.h"
#include "Address.h"

int main()
{
    Patient rich("Richard", "Specioso", "123 Someplace", "Syracuse", "New York",
                 "12345", "315-345-4567", "Mary", "Jane", "315-345-4568");

    rich.DisplayInfo();

    Procedure* exam = new Procedure("Physical Exam", "07-01-2021", "Dr. Smith", 250.00);

    exam->DisplayInfo();

    Procedure* xray = new Procedure("X-Ray", "07-26-2021", "Dr. Jones", 500.00);

    xray->DisplayInfo();

    Procedure* bloodTest = new Procedure("Blood Test", "07-29-2021", "Dr. Irvine", 200.00);

    bloodTest->DisplayInfo();

    Procedure* myProcedures[] = {Procedure("Physical Exam", "07-01-2021", "Dr. Smith", 250.00),
                                 Procedure("X-Ray", "07-26-2021", "Dr. Jones", 500.00),
                                 Procedure("Blood Test", "07-29-2021", "Dr. Irvine", 200.00)};
    myProcedures[0] = exam;
    myProcedures[1] = xray;
    myProcedures[2] = bloodTest;

    cout << "Using for each" << endl;

    for(Procedure temp : myProcedures)
    {
        temp.DisplayInfo();
    }

    cout << "Using the overloaded " << endl;
    cout << rich << endl;
    cin >> rich;
    cout << rich < endl;

    if(xray > exam)
        cout << "Exam greater than Xray" << endl;
    else
        cout << "Xray greater than Exam" << endl;

    delete bloodTest;
    delete xray;
    delete exam;
    return 0;
}
