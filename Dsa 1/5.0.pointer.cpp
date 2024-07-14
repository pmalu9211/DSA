#include <iostream>
using namespace std;

int main(){
    int *a = 0;
    int b = 5;
    a = &b;
    cout<<*a<<endl;
}