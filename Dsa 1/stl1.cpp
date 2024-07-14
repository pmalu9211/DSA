#include <bits/stdc++.h>

using namespace std;

void print(vector<int> v){
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

// int main(){
//     pair<int,string> P;
//     P.first = 44;
//     P.second = "hello";
//     pair<int, string> p;
//     p = {32,"efs"};
//     cout<<P.first<<endl;
//     cout<<p.first<<endl;

//     vector<int> v(10,0);
//     v.push_back(11);
//     print(v);
//     v.pop_back();
//     //same exact vector as the v is v1, so the changes that takes place in v1 are
//     //reflected in v as both represent same space
//     vector<int> &v1 = v;
//     print(v1);
//     v1.push_back(222);
//     print(v1);
//     print(v);
    
// }