#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include "LinkedListTemplate.h"

template <class T>
class Stack
{
    public:
        Stack();
        ~Stack();
        void push(T);
        void pop();
        T top() const;
        int Size() const;
        bool isEmpty() const;

    private:
        LinkedList<T>* theStack;
};

template <class T>
Stack<T>::Stack()
{
    theStack = new LinkedList<T>();
}

template <class T>
Stack<T>::~Stack()
{
    delete theStack;
}

template <class T>
void Stack<T>::push(T value)
{
    theStack->AddFront(value);
}

template <class T>
void Stack<T>::pop()
{
    theStack->RemoveFront();
}

template <class T>
T Stack<T>::top() const
{
    return theStack->GetFront();
}

template <class T>
int Stack<T>::Size() const
{
    return theStack.Size();
}

template <class T>
bool Stack<T>::isEmpty() const
{
    return theStack->isEmpty();
}

#endif // STACK_H_INCLUDED
