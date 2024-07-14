#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(5);
    s.insert(2);
    s.insert(3);
    s.insert(9);
    
    for(int it : s){
        cout<<it<<endl;
    }
    set<int> :: iterator it = s.begin();
    for(;it!=s.end(); it++){
        cout<<*it<<endl;
    }

}