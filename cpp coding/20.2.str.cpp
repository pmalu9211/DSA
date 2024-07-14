#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s;
    s = "Hello world";
    cout<<s.length()<<endl;
    string j = s.substr(6,5);
    cout<<j<<endl;
    string i = "33";
    int x = stoi(i);
    x = x + 5;
    cout<<x;
}