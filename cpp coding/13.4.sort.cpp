#include <iostream>

using namespace std;

int main(){
    int len;
    cout<<"what length array : ";
    cin>>len;

    int a[len];

    for (int i = 0; i < len; i++){
        int in;
        cin>>in;
        a[i] = in;

    }
    for (int b = 0; b < len; b++){
        for(int g = len - b - 1; g > 0; g--){
            if (a[b] < a[g]){
                int temp;
                temp = a[b];
                a[b] = a[g];
                a[g] = a[b];
            }
        }

    }
    for (int j = 0; j < len; j++){
        cout<<a[j];

    }
    

}