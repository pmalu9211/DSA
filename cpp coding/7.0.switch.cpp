#include<iostream>

using namespace std;

int main(){
    //calculator
    
    int a,b;
    char sign;

    cout<<"What is the first number? :";
    cin>>a;

    cout<<"What is the second number? : ";
    cin>>b;

    cout<<"What is the operation? : ";
    cin>>sign;

    switch(sign){

    case '+':
    cout<<(a + b);
    break;

    case '-':
    cout<<(a-b);
    break;

    case '*':
    cout<<(a*b);
    break;

    case '/':
    cout<<(a/b);
    break;

    default:
    cout<<("Bhadwe");


    }

}