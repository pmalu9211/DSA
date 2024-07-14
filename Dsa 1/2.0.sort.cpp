#include <iostream>

using namespace std;

int main(){
    // int l = 0;
    int* a;
    cout<<a;
    // cout<<*a;

    char k  = 'l';
    char *b = &k;
    cout<<b;
    cout<<endl;
    cout<<*b;

    bool m = true;
    bool *u = &m;

    cout<<u<<" "<<*u<<endl;
}
