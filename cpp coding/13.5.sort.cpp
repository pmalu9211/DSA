#include <iostream>

using namespace std;

int main(){
    cout<<"Array length : ";
    int len;
    cin>>len;
    int a[len];

    for (int i = 0; i<len; i++){
        cout<<"term : ";
        int j;
        cin>>j;
        a[i] = j;
    }

    for (int i = 0; i<len; i++){
        int pos = 0;
        for(int j = 0; j < len; j++){
            if (a[i] > a[j]){
                pos++;
            }
        }
        int temp;
        temp = a[i];
        a[i] = a[pos];
        a[pos] = temp;
    }

    for (int jj = 0; jj<len; jj++){
        cout<<a[jj];
    }
    

}