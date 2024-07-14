#include <iostream>
using namespace std;

int sum(int *a, int size){
    if(size <= 0){
        return 0;
    }
    // if(size == 1){
    //     return a[0];
    // }
    return sum(a+1,--size) +a[0];
}

int main(){
    int a[6] = {6,6,6,6,6,6};
    cout<<"the sum is : "<<sum(a+1,6);

}