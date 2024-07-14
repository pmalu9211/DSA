#include "bits/stdc++.h"

using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];
    
    for (int i = 0; i<n; i++){
        
        int in;
        cin>>in;
        a[i] = in;
      

    }
 
    int N =1e5+1;
    int arr[N];

    for (int i = 0; i < N; i++){
        arr[i] = -1;
       // cout<<"hi";
    }
    int minidx =INT_MAX;
    int miin;
    for(int i = 0; i < n; i++){
        if (arr[a[i]] != -1){
            
            miin = min(minidx, arr[a[i]]);
           
        }
        else
        {arr[a[i]] = i;}
        


    }
    cout<<miin;
    //cout<<"Hello";
   //cout<<minidx;
}