#include<iostream>
#include<vector>
using namespace std;

vector <int> spaw(vector <int> v , int i){
    int s = i;
    int e = v.size()-1;

    while(e>=s){
        swap(v[s],v[e]);
        e--; s++;
    }
    return v;
}

void print(vector <int> v){
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<endl;
    }
}

//reverse a vector after a certain an index

int main(){
    vector <int> v;

    v.push_back(4);
    v.push_back(3);
    v.push_back(8);
    v.push_back(2);
    v.push_back(6);


    cout<<v.capacity();
    print(v);
    ;
    print(spaw(v,0));

}