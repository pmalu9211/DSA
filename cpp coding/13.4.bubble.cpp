#include <iostream>

using namespace std;

int main(){
    cout<<"n :";
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i<n; i++){
        cout<<"term : ";
        int in;
        cin>>in;
        a[i] = in;

    }

    for (int j = 0; j < n; j++){
        for (int kk = n; kk > 1; kk = kk -j -1 ){
            if (a[n - kk] > a[n - kk + 1]){
                int temp;
                temp = a[n - kk ];
                a[ n - kk] = a[n - kk + 1];
                a[n - kk + 1] = temp;

            }
        }
    }
    for (int ii = 0; ii<n; ii++){
        cout<<a[ii];

    }
}