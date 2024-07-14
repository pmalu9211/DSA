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

int sum = 0;

    for (int jj = 0; jj < len; jj++){
        for (int kk = len - jj; kk > 0; kk-- ){
            sum = sum + a[kk];
            
        }
        
    }
    cout<<sum;
}