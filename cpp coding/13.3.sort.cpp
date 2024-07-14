#include <iostream>
using namespace std;


int del(int a [], int len, int ele){

    int b[len - 1];
    for (int i = 0; i < len - 1; i ++){
        a[i + 1] = b [i]; 
    }
    return ;

}

int main(){

    
}
