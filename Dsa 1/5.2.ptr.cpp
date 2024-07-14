#include <iostream>
using namespace std;

//double pointer

int main(){
    int a = 6;
    int *b = &a;
    int **c = &b;
    int ***l = &c;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"*b = "<<*b<<endl;
    cout<<"c = "<<c<<endl;
    cout<<"*c = "<<*c<<endl;
    cout<<"**c = "<<**c<<endl;
    cout<<"&c = "<<&c<<endl;
    cout<<***l<<endl;
    a++;
    cout<<"a = "<<a<<endl;
    *b = *b + 1;
    cout<<"a = "<<a<<endl;
    **c = **c + 1;
    **c++;
    cout<<"a = "<<a<<endl;


    
}