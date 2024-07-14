
#include <iostream>
using namespace std;

class Node{

    public: 
    Node* next;
    int data;
    Node(int data){
    this->data = data;
    this->next = NULL;
    }
};

class Queue{

    Node* start;
    Node* end;

    public:
    Queue(){
    this->start = NULL;
    this->end = NULL;

    }
    void push(int data){

    Node* temp = new Node(data);

    if(start == NULL && end == NULL){
	    start = temp;
  	    end = temp;
        temp ->next = start;}
    else{
	    end->next = temp;
        temp -> next = start;
	    end = temp;}
    }
    
    int pop(){
    	if(start == NULL && end == NULL)
	    {cout<<"The queue is empty"<<endl;
	     return -999;}
	
	else{
        Node* temp;
        temp = start;
        int ans = start ->data;
        start = start -> next;

	    free(temp);
        return ans;
        }
    }

    

    void print(){
	Node* temp = start;
	for(;temp != end; temp = temp->next){
	    cout<<temp->data<<" ";
        }
        cout<<temp->data;
	cout<<endl;
	}};

int main(){
    Queue a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    a.push(6);
    a.print();
    a.push(6);

    // a.pop();
    a.print();
    a.push(6);
    a.push(6);
    a.print();
    a.pop();
    a.print();
    a.pop();
    a.print();
    a.pop();
    a.print();
    a.pop();
    a.print();


}


