#include<iostream>

using namespace std;

int main(){
    int a,b,c;

    cout<<"What is the value a :";
    cin>>a;

    cout<<"What is the value b :";
    cin>>b;

    cout<<"What is the value c :";
    cin>>c;
    
    if(a>b){
        if (a>c){
            cout<<"a is the greatest number here";}
        else if (c>a)
        {
            cout<<"c is the greatest number ";
        }
        
        
    }
    else{
        if (a>c){
            cout<<"b is the greatest number here";}
        else if (c>b)
        {
            cout<<"c is the greatest number ";
        }        
    }
    }