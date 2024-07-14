#include <iostream>

using namespace std;

void fib(int a){
    int f = 0;
    int ff = 1;
    int sum = 0;

    cout<<f<<endl;
    cout<<ff<<endl;

    for (int g =2; g< a; g++){
        sum = f + ff;
        f = ff;
        ff = sum;
        cout<<sum<<endl;
    }
}

int main(){

    int in;
    cin>>in;

    fib(in);



}