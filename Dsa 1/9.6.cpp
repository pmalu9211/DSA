#include <iostream>

using namespace std;

int sum(int arr[], int size){
    if(size < 1){
        return 0;
    }
    return arr[0] + sum(arr+1, --size);
}

int main(){
    int a[5] = {1,2,3,4,5};
    cout<<sum(a,5); 
}