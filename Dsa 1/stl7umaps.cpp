#include <bits/stdc++.h>
using namespace std;

void print(unordered_map<int,int> m){
    for(auto value : m){
    cout<<value.first<<" "<<value.second;
    cout<<endl;
    }
    cout<<endl;
}


int main(){
    unordered_map<int,int> m;

    int i; cin>>i;
    for(int j = 0; j < i; j++){
        int input; cin>>input;
        m[input]++;
    }
    print(m);

}