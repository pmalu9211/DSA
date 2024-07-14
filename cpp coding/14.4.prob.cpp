#include <iostream>

using namespace std;

int main(){
    /* Calculating the max day */

    int a[5] = {5,0,6,0,7};
    int len = 5;
    int cm = a[0];
    if (a [0] > a[1]){
        cout<<"1st day is max";
    }

    for (int j = 1; j<len; j++){
        if(a[j] > cm && a[j] > a[j+1]){
            cout<<"max at day : "<<j+1;
            cm = a[j];
        }
        else{
            if (a[j] > cm){
                cm = a[j];
            }
        }

    }

}