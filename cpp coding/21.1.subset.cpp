#include <iostream>

using namespace std;

/*
cool code indeed, a set can be represented as 

{a,b,c}
000/001/010/011/100/101/110/111
-/c/b/bc/a/ac/ab/abc

*/

void subset(int a[], int n){
    for (int i = 0; i < (1<<n); i++){
        for ( int j = 0; j<n; j++){
            if(i & (1<<j)){
                cout<<a[j];
            }
            
        }cout<<endl;
    }

}

int main(){
int n = 3;
int a[n] = {1,2,3};
subset(a,n);
}