#include<iostream>

using namespace std;

int main(){
    string a  = "";
    a.push_back('k');
    a.push_back('l');
    a.append("sds");
    a = a + "std";
    a = "goo" + a;
    cout<<a<<endl;
}