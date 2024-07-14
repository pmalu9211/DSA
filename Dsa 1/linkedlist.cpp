#include <iostream>
using namespace std;

template <typename T> class node{
    public: 
    T data;
    node* next;
    //node* head;
    node* search(T ele, node* head);
    void insert(T ele);
    void del(T ele);

    node(T data){
        node* next = NULL;
        this -> data = data;
    }


};

template <typename T> node<T>* node<T>:: search(T ele, node<T>* head){
    if(head == NULL){
        cout<<"the list is empty "<<endl;
    }
    node<T>* temp = head;
    for(; temp->data != ele && temp -> next != NULL; temp = temp->next )
    {
        cout<<temp -> data <<endl;
    }
    return temp;
}

int main(){
    node<char>* head = new node<char>('a');
    node<char>* head1 = new node<char>('b');
    node<char>* head2 = new node<char>('c');
    node<char>* head3 = new node<char>('d');

    head -> next = head1;
    head1 -> next = head2;
    head2 -> next = head3;

    node<char>* ans = head->search('b',head);
    cout<<ans->data<<endl;
}