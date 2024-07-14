#include <iostream>

using namespace std;

int nat(int n){
    int sum = 0;
    for (int j= 1; j <=n; j++ ){
        sum = sum + j;
    }
    return sum;
}

int main(){
    cout<<nat(100);
}