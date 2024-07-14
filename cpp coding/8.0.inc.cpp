#include <iostream>

using namespace std;

int main(){
    int i = 10;
    int j = 100;

cout<<++i<<endl;    
cout<<i<<endl;
int a = ++i;
cout<<a<<endl;
cout<<i<<endl;
cout<<i++<<endl;
cout<<i<<endl;

cout<<&(i)<<endl;
int *f = &(a);

cout<<f<<endl;

//cast

char k = char(j);
cout<<k;
}