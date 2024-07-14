#ifndef TREE_H_
#define TREE_H_
template <class T>
class node
{
public:
    T info;
    node<T> *next;
    node();
    friend class Stack<T>;
};
template <class T>
class Stack
{
private:
    node<T> *top;

public:
    bool isEmpty();
    void Push(T data);
    void Pop();
    void Display();
    T isTop();
    Stack();
    // void Traversing();
};
class Expression_Tree;
class Tree
{
private:
    char data;
    Tree *left, *right;

public:
    Tree();
    friend class Expression_Tree;
};
#endif /* STACK_H_ */