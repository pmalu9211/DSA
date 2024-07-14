#include <bits/stdc++.h>
using namespace std;
// #include "stl1.cpp"



// void print_varray( vector<int> v[], int size){
//     for(int i = 0; i< size; i++){
//         for(int j = 0; j<v[i].size(); v++){
//             cout<<v[i]<<" ";
//         }
//         cout<<endl;
//     }
// }
void print(vector<int> v){
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void printvv(vector<int>v[], int size){
    for(int i=0; i<size;i++){
        for(int j = 0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    //array of vector
    int n;
    cin>>n;
    vector<int> v[n];

    for(int i = 0; i<n; i++){
        cout<<"what is the lenght of the "<<i+1<<"th array in the vector : ";
        int l;
        cin>>l;
        for(int j = 0; j<l; j++){
            int ele;
            cin>>ele;
            v[i].push_back(ele);
        }
    }
    // print_varray(v,n);
    printvv(v,n);
}