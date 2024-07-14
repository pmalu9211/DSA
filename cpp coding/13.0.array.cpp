#include <iostream>

using namespace std;

int main(){
    const char * a[4]= {"hello","hi"};
    for(int j = 0; j<2; j++){
        cout<<a[j]<<" ";
    }
}