#include <iostream>
using namespace std;

void rev(string &a, int j, int i){
    if(i<= j){
        return;
    }
    swap(a[i],a[j]);
    // cout<<a;
    return rev(a, ++j ,--i);
}

int main(){
    string a = "llamaade";
    string b = "kakdkfk";

    rev(a, 0, 7);
    cout<<a<<endl;
    rev(b, 0,6);
    cout<<b<<endl;

}