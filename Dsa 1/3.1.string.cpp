#include<iostream>
#include <string>
using namespace std;
//get a full line as an input
int main(){
    string a;
    getline(cin,a);
    cout<<a;

    char b[100];
    // getline(cin,b[100]);
    cin.getline(b,100,' ');//the ' ' here is a custom delimiter
    cout<<b;

}

