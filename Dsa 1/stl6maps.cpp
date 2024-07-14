//using maps to record the freuqncy
#include <bits/stdc++.h>

using namespace std;

void print(map<int,int> m){
    for(auto value : m){
    cout<<value.first<<" "<<value.second;
    cout<<endl;
    }
    cout<<endl;
}

void prints(map<string,int> m){
    for(auto value : m){
    cout<<value.first<<" "<<value.second;
    cout<<endl;
    }
    cout<<endl;
}

int main(){
    //here the first int is the number and the second is the freq
    //from array
    map<int,int> m1;
    int arr1[8] = {1,2,1,2,21,1,21,1};
    for(int i = 0;i<8; i++){
        m1[arr1[i]] = m1[arr1[i]] + 1;
    }

    print(m1);
    map<string,int> m2;
    int in; cin>>in;
    for(int i = 0; i<in; i++){
        string input;
        cin>>input;
        m2[input]++;
    }

    prints(m2);

}