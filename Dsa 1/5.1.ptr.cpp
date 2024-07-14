#include <iostream>
using namespace std;

void add(int *a){
    *a += 44;

}

int main(){
    // char temp[2] = "z";
    // char *a = &temp[0];
    // cout<<a<<endl;

    /*string a = "Hello";
    cout<<a[0]<<endl;
    char *l = &a[0];
    cout<<l<<endl;*/

    // char *c = 'a';
    // cout<<c<<endl;

    //correctly using fucition with pointer

    int a = 5;
    int *b = &a;
    add(b);
    cout<<*b<<endl;
    cout<<a<<endl;
    //when passing an array in a function you 
    //are not actually passing an array you are
    //passing the pointer of the first location
    
}
