#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include "LinkedList.h"

template <class T>
class Queue
{
    public:
        Queue();
        ~Queue();
        void enqueue(T data);
        T peek() const;
        void dequeue();
        bool isEmpty() const;
        int size() const;

    private:
        LinkedList<T>* theQueue;
};

template <class T>
Queue<T>::Queue()
{
    theQueue = new LinkedList<T>();
}

template <class T>
Queue<T>::~Queue()
{
    delete theQueue;
}

template <class T>
void Queue<T>::enqueue(T value)
{
    theQueue->AppendNode(value);
}

template <class T>
void Queue<T>::dequeue()
{
    theQueue->RemoveFront();
}

template <class T>
T Queue<T>::peek() const
{
    return theQueue->GetFront();
}

template <class T>
int Queue<T>::size() const
{
    return theQueue->Size();
}

template <class T>
bool Queue<T>::isEmpty() const
{
    return theQueue->isEmpty();
}

#endif // QUEUE_H_INCLUDED
