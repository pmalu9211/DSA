#include <iostream>
#include "tree.h"
#include "tree.cpp"
#include <ctype.h>
#include <stdio.h>
#include <algorithm>

using namespace std;
struct SS
{
    Tree *nodes;
    bool bit;
};
class Expression_Tree
{
private:
    string postfix;
    Tree *root;

public:
    void Input();
    Tree *createTree();
    void inorderRecursive(Tree *cnode);
    void postorderRecursive(Tree *cnode);
    void preorderRecursive(Tree *cnode);
    void inorder();
    void preorder();
    void postorder();
};
void Expression_Tree ::Input()
{
    cout << "Enter a Postfix Expression: ";
    cin >> postfix;
    cout << "\n";
}
Tree *Expression_Tree ::createTree()
{
    Stack<Tree *> treestack;
    for (int i = 0; i < postfix.length(); i++)
    {
        Tree *tnode = new Tree;
        tnode->data = postfix[i];
        if (isalpha(postfix[i]))
        {
            treestack.Push(tnode);
        }
        else if (postfix[i] == '+' || postfix[i] == '-' ||
                 postfix[i] == '*' || postfix[i] == '/' || postfix[i] == '^')
        {
            tnode->right = treestack.isTop();
            treestack.Pop();
            tnode->left = treestack.isTop();
            treestack.Pop();

            treestack.Push(tnode);
        }
    }
    root = treestack.isTop();
    return treestack.isTop();
}

void Expression_Tree ::inorderRecursive(Tree *cnode)
{
    if (cnode)
    {
        inorderRecursive(cnode->left);
        cout << cnode->data << " ";
        inorderRecursive(cnode->right);
    }
}

void Expression_Tree ::preorderRecursive(Tree *cnode)
{
    if (cnode)
    {
        cout << cnode->data << " ";
        preorderRecursive(cnode->left);
        preorderRecursive(cnode->right);
    }
}

void Expression_Tree ::postorderRecursive(Tree *cnode)
{
    if (cnode)
    {
        postorderRecursive(cnode->left);
        postorderRecursive(cnode->right);
        cout << cnode->data << " ";
    }
}

void Expression_Tree ::inorder()
{
    Stack<Tree *> traversal;
    Tree *current = root;
    while (current != NULL || traversal.isEmpty() == false)
    {
        while (current != NULL)
        {
            traversal.Push(current);
            current = current->left;
        }
        current = traversal.isTop();
        traversal.Pop();
        cout << current->data << " ";
        current = current->right;
    }
}

void Expression_Tree ::preorder()
{
    Stack<Tree *> traversal;
    Tree *current = root;
    while (current != NULL || traversal.isEmpty() == false)
    {
        while (current != NULL)
        {
            cout << current->data << " ";

            traversal.Push(current);
            current = current->left;
        }
        current = traversal.isTop();
        traversal.Pop();
        current = current->right;
    }
}
void Expression_Tree ::postorder()
{
    Stack<SS> traversal;
    SS element;
    element.nodes = root;
    element.bit = 0;
    while (element.nodes != NULL || traversal.isEmpty() == false)
    {
        while (element.nodes != NULL)
        {
            traversal.Push(element);
            if (element.nodes->right != NULL)
            {
                SS r_element;
                r_element.bit = 1;
                r_element.nodes = element.nodes->right;
                traversal.Push((r_element));
            }
            element.nodes = element.nodes->left;
        }
        element = traversal.isTop();
        // traversal.Pop();
        while (element.bit != 1)
        {
            cout << element.nodes->data << " ";
            // element = traversal.isTop();
            traversal.Pop();
            if (traversal.isEmpty())
            {
                return;
            }
            element = traversal.isTop();
        }
        if (element.bit == 1)
        {
            element.bit = 0;
            traversal.Pop();
        }
    }
}

int main()
{
    int ch;
    Expression_Tree exp;
    cout << "Expression Tree" << endl;

    while (1)
    {
        cout << "Menu:\n1.Input Expression\n2.Create Expression Tree\n3.Recursive Inorder Traversal\n4.Recursive Postorder Traversal" << endl;
        cout << "5.Recursive Preorder Traversal\n6.Non recursive Inorder Traversal\n7.Non-recursive Postorder Traversal\n8.Non-recursive Preorder Traversal\n9.Exit" << endl;
        cout << "Choose your option: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            exp.Input();
            break;
        case 2:
            exp.createTree();
            break;
        case 3:
            exp.inorderRecursive(exp.createTree());
            cout << "\n";
            break;
        case 4:
            exp.postorderRecursive(exp.createTree());
            cout << "\n";
            break;
        case 5:
            exp.preorderRecursive(exp.createTree());
            cout << "\n";
            break;
        case 6:
            exp.inorder();
            cout << "\n";
            break;
        case 7:
            exp.postorder();
            cout << "\n";
            break;
        case 8:
            exp.preorder();
            cout << "\n";
            break;

        case 9:
            cout << "Now exiting the program..." << endl;
            exit(0);
        }
    }
    return 0;
}