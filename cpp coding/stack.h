#ifndef stack_h
#define stack_h

#include <iostream>
using namespace std;

template<typename T>
class Node{
    public:
    T data;
    Node* next;

    Node<T>(T val);
};

template<typename T>
class Stack{
    private:
    Node<T>* top = nullptr;

    public:
    Stack<T>();
    void push(T ele);
    T pop ();
    T peek();
    bool isEmpty();
    void display();

    
};

#endif


