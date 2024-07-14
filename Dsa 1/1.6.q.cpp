#include <iostream>
using namespace std;

int main(){
    int a [6] = {0,4,5,0,6,0};
    int zero = 0;
    int num = 0;
    for(int i = 0; i<6; i++){
        if(a[i]==0){
            // zero++;
        }
        else{
            swap(a[num],a[i]);
            num++;
        }
    }
    // for(int i = zero; i<6;i++){
    //     a[i] = 0;
    // }

    for(int i =0; i<6;i++){
        cout<<a[i]<<endl;
    }
}