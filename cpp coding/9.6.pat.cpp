#include <iostream>

using namespace std;

int main(){
    int i;
    cin>>i;

    for (int j = 1;j<= i; j++ ){
        for (int k = 1; k <= i-j; k++){
            cout<<" ";
        }
        int z = j;
        for (int l =1; l <= (2*j) - 1;l++ ){
            
            cout<<l;
        }
    cout<<endl;
    }
}