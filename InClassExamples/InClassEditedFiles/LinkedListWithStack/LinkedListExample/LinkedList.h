#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

#include <iostream>
using namespace std;

template <class T>
class ListNode
{
    public:
        T value;
        ListNode<T>* next;
        ListNode<T>* prev;

        ListNode(T nodeValue)
        {
            value = nodeValue;
            next = nullptr;
            prev = nullptr;
        }

};

template <class T>
class LinkedList
{
    public:
        LinkedList();
        ~LinkedList();

        void AppendNode(T);
        void InsertNode(T);
        void DeleteNode(T);
        ListNode<T> Search(T) const;
        void DisplayNode() const;
        void DisplayNodeReverse() const;
        int Size() const;
        bool isEmpty() const;

        //Stack Support methods
        T GetFront() const;
        void AddFront(T);
        void RemoveFront();

    private:
        ListNode<T>* head;
        ListNode<T>* tail;
        int count;
};


template <class T>
LinkedList<T>::LinkedList()
{
    head = tail = nullptr;
    count = 0;
}

template <class T>
LinkedList<T>::~LinkedList()
{
    ListNode<T>* nodePtr; //traverse the list
    ListNode<T>* nextNode; // point to next in the list

    nodePtr = head;

    while(nodePtr != nullptr)
    {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }

}

template <class T>
void LinkedList<T>::AppendNode(T value)
{
    ListNode<T>* newNode;

    newNode = new ListNode<T>(value);

    if(head == nullptr)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    count++;
}

template <class T>
void LinkedList<T>::DisplayNode() const
{
    ListNode<T>* nodePtr; //traverse the list

    nodePtr = head;

    while(nodePtr != nullptr)
    {
        cout << nodePtr->value << endl;
        nodePtr = nodePtr->next;
    }
}

template <class T>
void LinkedList<T>::DisplayNodeReverse() const
{
    ListNode<T>* nodePtr; //traverse the list

    nodePtr = tail;

    while(nodePtr != nullptr)
    {
        cout << nodePtr->value << endl;
        nodePtr = nodePtr->prev;
    }
}

template <class T>
void LinkedList<T>::InsertNode(T value)
{
    ListNode<T>* newNode = nullptr;
    ListNode<T>* nodePtr = nullptr;
    ListNode<T>* previousNode = nullptr;

    newNode = new ListNode<T>(value);

    if(head == nullptr)
    {
        head = tail = newNode;
        newNode->next = newNode->prev = nullptr;
    }
    else
    {
        nodePtr = head;

        while(nodePtr != nullptr && nodePtr->value < value)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        if(previousNode == nullptr)
        {
            head = newNode;
            newNode->next = nodePtr;
            nodePtr->prev = newNode;
        }
        else
        {
            previousNode->next = newNode;
            newNode->next = nodePtr;
            newNode->prev = previousNode;
            if(nodePtr != nullptr)
            {
                nodePtr->prev = newNode;
            }
            else
                tail = newNode;
        }

    }
    count++;
}

template <class T>
T LinkedList<T>::GetFront() const
{
    return head->value;
}

template <class T>
void LinkedList<T>::AddFront(T value)
{
    if(head == nullptr)
    {
        head = tail = new ListNode<T>(value);
    }
    else
    {
        ListNode<T>* newNode = new ListNode<T>(value);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    count++;
}
template <class T>
void LinkedList<T>::RemoveFront()
{
    ListNode<T>* temp = head;
    if(head == tail)
    {
        delete head;
        head = tail = nullptr;
    }
    else
    {
        head->next->prev = nullptr;
        head = head->next;
        temp->next = nullptr;
        delete temp;
    }
    count--;
}

template <class T>
int LinkedList<T>::Size() const
{
    return count;
}

template <class T>
bool LinkedList<T>::isEmpty() const
{
    return head == nullptr;
}
#endif // LINKEDLIST_H_INCLUDED
