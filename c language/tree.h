#ifndef TREE_H_
#define TREE_H_

template <class T>
class Stack;

template <class T>
class node{
    private:
        T info;
        node<T> *next;
    public:
        node();
        friend class Stack<T>;;

};

template <class T>
class Stack{
    private:
    node<T>*top;
    public:
    bool isEmpty();
    void Push(T data);
    void Pop();
    void Display();
    T isTop();
    Stack();};

class Expression_Tree;
class Tree{
    private:
    char data;
    Tree *left, *right;
    public:
    Tree();
    friend class Expression_Tree;

};
#endif;