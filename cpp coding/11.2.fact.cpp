#include <iostream>

using namespace std;

void fact(int a){
    int fat = 1;
    while (a > 0){
        fat = fat*a;
        a = a-1;
    }
    cout<<fat;
}

int main(){

    int jj;
    cin>>jj;

    fact(jj);

}