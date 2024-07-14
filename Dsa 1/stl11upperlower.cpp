#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    
    for(int i = 0; i < (int)(1e6); i++){
        s.insert(rand());
        for(int j = 0; j < (int)(1e6); j++);
    }

    set<int> :: iterator it = lower_bound(s.begin(), s.end(), rand());
    cout<<*it<<endl;

}