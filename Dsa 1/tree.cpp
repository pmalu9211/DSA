#include <iostream>
#include <queue>
using namespace std;

class node{
    public:

    int data;
    node* lchild;
    node* rchild;

    node(int data){
        this -> lchild = NULL;
        this -> rchild = NULL;
        this->data = data;

    }

    // friend class Tree;


};


node* TreeCreation(node* root){
    int data;
    cout<<"enter the data : "; cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"enter the data that you want to store in the left of "<<data<<endl;
    root->lchild = TreeCreation(root->lchild);
    cout<<"enter the data that you want to store in the right of "<<data<<endl;
    root->rchild = TreeCreation(root->rchild);
    return root;

}

void LevelTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    node* temp = q.front();
    while(!q.empty()){
        temp = q.front();
        if(temp == NULL){
            cout<<endl;
            // break;
            // q.push(NULL);
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{

            q.pop();
            cout<<temp ->data<<" ";
            if(temp->lchild){
                q.push(temp->lchild);
            }
            if(temp->rchild){
                q.push(temp -> rchild);
            }
        }
    }
    // cout<<root->data<<endl;
}

int main(){
    node* root;
    root = TreeCreation(root);
    cout<<endl;
    LevelTraversal(root);

}