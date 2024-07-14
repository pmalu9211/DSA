#include <bits/stdc++.h>

using namespace std;

void print_vpair(vector<pair<int,string>>v){
    for(int i = 0; i<v.size(); i++){
        cout<<v[i].first<<" "<<v[i].second; 
    cout<<endl;

    }
}

int main(){
    //vector of pair

    vector<pair<int,string>> v;
    //taking input
    int length;
    cin>>length;
    for(int i = 0; i<length; i++){
        int x; 
        string y;
        cin>>x; 
        cin>>y;
        v.push_back({x,y});
    }
    print_vpair(v);

}