#include<iostream>

using namespace std;
int z = 1;
int main(){
    int i = 5;
    for (int a = 1; a <= 5; a++){
        for (int b = 1 ; b <= a; b ++){
            cout<<z;
            z = z + 1;
        }
    cout<<endl;
    }
}