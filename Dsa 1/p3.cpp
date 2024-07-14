#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class cq{
    public:
    int front;
    int rear;
    int *arr;
    int size;
    cq(int s){
        front = rear = -1;
        size = s;
        arr  = new int[s];
    }

    void enque(int a){
        if(((front==0)&&(rear==size-1)) || (front == (rear+1)%size)){
            cout<<"full";
        }
        else if(front ==-1){
            front = rear = 0;
            arr[rear]=a;
        }
        // else if(rear==size-1 && front !=0){
        //     rear = 0 ;
        //     arr[rear]=a;
        // }
        else{
            rear = (rear +1)%size;
            arr[rear]=a;
        }
    }

    int deque(){
        int ans;
        if(front ==-1){
            cout<<"empty";
            return -1;
        }
        else{
           ans = arr[front];
            arr[front]=-1;
            if(front == rear ){
                front = rear =-1;
            }
            else if(front == size -1){
                front =0;
            }
            else{front++;}
        return ans;
        }
    }

    void display(){
        if(front ==-1){
            cout<<"empty"; 
        }
        else{
            int temp = front;
            cout<<arr[temp]<<" ";
            while((temp+1)%size != rear){
                temp++;
                cout<<arr[temp]<<" ";
            }
            cout<<arr[rear]<<endl;
        }
        
    }
};

int main(){
    cq c(9);
    c.enque(5);
    c.enque(2);
    c.enque(33);
    c.enque(33);
    c.enque(33);
    c.enque(33);
    c.enque(33);
    c.enque(33);
    c.enque(33);
    c.enque(33);
    c.display();
    c.deque();
    c.display();
    // c.enque(54);

}