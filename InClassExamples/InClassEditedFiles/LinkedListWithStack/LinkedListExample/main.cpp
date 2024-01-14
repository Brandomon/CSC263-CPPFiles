#include <iostream>
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"


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
    cout << "Complete list" << endl;
    myList2.DisplayNode();

    cout << "Reverse" << endl;
    myList2.DisplayNodeReverse();*/


    Stack<double> myStack;

    if(myStack.isEmpty())
        cout << "Stack is empty" << endl;
    myStack.push(8.45);
    myStack.push(99.345);
    if(myStack.isEmpty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;
    cout << myStack.top() << endl;
    myStack.pop();
    cout << myStack.top() << endl;
    myStack.pop();
    if(myStack.isEmpty())
        cout << "Stack is empty" << endl;

    Queue<int> myQueue;

    if(myQueue.isEmpty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    cout << "Adding to queue..." << endl;
    myQueue.enqueue(45);
    myQueue.enqueue(65);

    if(myQueue.isEmpty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    cout << myQueue.peek() << endl;
    myQueue.dequeue();
    cout << myQueue.peek() << endl;
    myQueue.dequeue();

    if(myQueue.isEmpty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    myQueue.dequeue();

    return 0;
}
