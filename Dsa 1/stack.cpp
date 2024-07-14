#include <iostream>
using namespace std;

class node{
    public: 
    int data;
    node* next;

    node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //node();
};

class stack{

    node* top;

    public:
    stack(){
        top = NULL;
    }

    void push(int data){
            node* temp = new node(data);
            temp -> next = top;
            top = temp;
        
    }

    int pop(){
        if(top == NULL){
            cout<<"The stack is empty"<<endl;
            return -1;
            //exit(1);
        }
        else{
            node* temp = top;
            top = top ->next;
            int ans =  temp->data;
            free(temp);
            return ans;
        }
    }
    void print(){
        for(node* temp = top; temp != NULL; temp = temp -> next){
            cout<<temp->data<<" ";
        }
        cout<<endl;
    }

    
};

int main(){
    stack s;
    s.push(3);
    s.print();
    s.pop();
    s.push(2);
    s.push(5);
    s.push(1);
    s.push(7);
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();



}