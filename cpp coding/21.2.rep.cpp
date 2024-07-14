#include <iostream>

using namespace std;

int rep(int a[], int n){
    int sum = 0;
    for (int i = 0; i<n; i++){
        sum = sum^a[i];
    }
    return sum;
}

int main(){

    //we can check whether the arrar has a repeating term like this
    //taking the xor of the number
    //thus the xor of the same number is zero
    int a[] = {1,2,3,4,3,2,1};
    cout<<rep(a,7);

}