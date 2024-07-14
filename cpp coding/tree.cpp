#include "tree.h"
#include <iostream>
using namespace std;
template <class T>
node<T>::node()
{
    next = NULL;
}
template <class T>
Stack<T>::Stack()
{
    top = NULL;
}
template <class T>
bool Stack<T>::isEmpty()
{
    if (top == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
template <class T>
T Stack<T>::isTop()
{
    return top->info;
}
template <class T>
void Stack<T>::Push(T data)
{
    node<T> *new1 = new node<T>;
    new1->info = data;
    if (top == NULL)
    {
        new1->next = NULL;
        top = new1;
    }

    else
    {
        new1->next = top;
        top = new1;
    }
}
template <class T>
void Stack<T>::Pop()
{
    node<T> *new1 = new node<T>;
    isEmpty();
    new1 = top->next;
    top->next = NULL;
    delete (top);
    top = new1;
}
Tree ::Tree()
{
    left = NULL;
    right = NULL;
}