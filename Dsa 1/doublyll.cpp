#include <iostream>
using namespace std;

template <typename T> class Node{
    T data;
    Node<T>* next;
    Node<T>* prev;

    Node<T>* search(T data, Node<T>* head);
    void insert(T data);
    void delete(T data);
    Node<T>(T data){
        this -> data = data;
        next == NULL;
        prev == NULL;
    }
};

template <typename T> Node<T>* Node<T>:: search(T data, Node<T>* head){
    Node<T>* temp = new Node<T>;
    temp = head;

    for(; temp-> data != data; temp = temp -> next){
        if(temp->next == NULL){
            cout<<"Not found in the list"<<endl;
            return -999;
        }
    }
    return temp;
    
}



int main(){

}