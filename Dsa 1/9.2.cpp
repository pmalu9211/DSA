#include <iostream>
using namespace std;

int fib(int a){
    if (a <=1){
        return a;
    }
    int ans = fib(a-1) + fib(a-2);

    return ans;
        
}

int main(){
    cout<<fib(8);
}