#include <iostream>

using namespace std;

void print(int g){
    cout<<g;
}

int add(int a, int b){
    return a+b;
}

int main(){
    print(add(59,30));
}