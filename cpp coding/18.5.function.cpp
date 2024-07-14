#include <iostream>

using namespace std;

// int fun(int a){
//     a = a+5;
//     return a;
// }

// int main(){
//     int b = 1;
//     fun(b);
//     cout<<b<<endl;
//     cout<<fun(b)<<endl;

// }

void fun(int* a, int*b){
    *a += 5;
    *b += 6;

}

int main(){
    int f = 1;
    int j = 2;

    cout<<f<<" "<<j<<endl;

    fun(&f,&j);

    cout<<f<<" "<<j<<endl;

}



