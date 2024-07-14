#include "stack.h"
#include<iostream>

using namespace std;

template <typename T>
Node<T> :: Node(T val){
    this->data = val;
    this->next = nullptr;
}

template <typename T>
Stack<T> :: Stack(){
    this->top = nullptr;
}
template <typename T>
void Stack<T> :: push(T ele){
    Node<T>* temp = new Node<T>(ele);
    if(this->top == nullptr){
        this->top = temp;
    }
    else{
        temp ->next = top;
        this -> top = temp;
    }
}


template <typename T>
T Stack<T> :: pop(){
    // this->top = nullptr;
    Node<T>* temp = top;
    this-> top = top->next;
    return temp ->data;
    delete(temp);
}

template <typename T>
T Stack<T> :: peek(){
    // Node<T>* temp = top;
    return(this->top->data);
}

template <typename T>
bool Stack<T> :: isEmpty(){
    return this->top == nullptr;
        // return true;
    
}

template<typename T>
void Stack<T> :: display(){
    Node<T>* temp = top;
    while(temp->next != nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
