#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
    node* prev;

    node(int val) : data(val), next(nullptr), prev(nullptr){}

};

void insert(node *&head, int val){
    node* newnode = new node(val);
    newnode -> next = head;
    head -> prev = newnode;
    head = newnode;



}

void display(node *head){
    node *temp = head;
    while(temp != nullptr){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}


int main(){
        node* head = nullptr;

    // Create and insert nodes into the doubly linked list
    head = new node(1);
    head->next = new node(2);
    head->next->prev = head;
    head->next->next = new node(3);
    head->next->next->prev = head->next;

    display(head);

    insert(head, 7);
    display(head);
    insert(head, 100);
    display(head);


}