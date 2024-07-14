#include <iostream>
using namespace std;

bool lser(int *a, int key, int size){
    if(a[0]==key){
        return true;
    }
    if(size <= 0){
        return false;
    }
    return lser (a+1, key, --size);
}

int main(){
    int a[5] = {1,2,34,5,6};
    int key = 22;
    cout<<lser (a,key,5);

    
}