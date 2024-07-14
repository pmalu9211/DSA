#include <iostream>

using namespace std;

int main (){
    // int a[5] = {5,7,2,1,6};
    int n; cin>>n;
    int a[n];

    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    for (int i = 0; i< n ; i++){
        for (int j = 0; j<n; j++){
            if(a[i] < a[j]){
                int temp = a[i];
           // cout<<"a[i] = "<<a[i]<<" "<<i<<" "<<j<<endl;
                a[i] = a[j];
               // cout<<"a[j] = a[i] = "<<a[j]<<" "<<i<<" "<<j<<endl;
                a[j] = temp;
                // cout<<"a[j] = "<<a[j]<<" "<<i<<" "<<j<<endl;


            }
        }
    }
        cout<<"*****************"<<endl;
    
    for (int i = 0; i<n; i++){
        cout<<a[i]<<endl;
    }
}