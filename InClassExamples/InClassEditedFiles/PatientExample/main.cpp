#include <iostream>
#include "Patient.h"
#include "Procedure.h"

using namespace std;

int main()
{
    Patient rich("Richard", "Specioso", "123 Someplace", "Syracuse", "New York",
                 "12345", "315-345-567", "Mary", "Jane", "315-453-5743");

    rich.DisplayInfo();

    Procedure* exam = new Procedure("Physical Exam", "10/26/2021", "Dr. Smith", 250.00);

    exam->DisplayInfo();

    Procedure* xray = new Procedure("X-Ray", "10/26/2021", "Dr. Jones", 500.00);

    xray->DisplayInfo();

    Procedure* bloodTest = new Procedure("Blood Test", "10/26/2021", "Dr. Irvine", 200.00);

    bloodTest->DisplayInfo();

    delete bloodTest;
    delete xray;
    delete exam;
    return 0;
}
