#include <iostream>
#include "LinkedListTemplate.h"
#include "Stack.h"
using namespace std;

int main()
{

  /*LinkedList<double> myList;

    myList.AppendNode(78.76);
    myList.AppendNode(23.45);
    myList.DisplayNode();

    LinkedList<double> myList2;

    myList2.InsertNode(23.73);
    myList2.InsertNode(53.45);
    myList2.DisplayNode();

    myList2.InsertNode(60.2);
    myList2.DisplayNode();

    myList2.InsertNode(33.5);
    myList2.DisplayNode();

    myList2.InsertNode(17.2);
    cout << "Complete List" << endl;
    myList2.DisplayNode();

    cout << "Reverse" << endl;
    myList2.DisplayNodeReverse();*/

    Stack<double> myStack;

    if (myStack.isEmpty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is NOT empty" << endl;

    cout << "Pushing onto stack" << endl;
    myStack.push(8.45);
    myStack.push(99.345);

    if (myStack.isEmpty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is NOT empty" << endl;

    cout << myStack.top() << endl;
    myStack.pop();

    cout << myStack.top() << endl;
    myStack.pop();

    return 0;
}
