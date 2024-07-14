#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    
    string a = "Ayoooo  jhfhfe lsdkf";
    cout<<a<<endl;
    for (int i = 0; a[i] != '\0'; i++){
        cout<<a[i]<<endl;
    }
    sort(a.begin(), a.end());
    cout<<a;

    
}