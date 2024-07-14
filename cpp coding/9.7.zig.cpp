#include <iostream>

using namespace std;

int main(){
    int i;
    cin>>i;

    for (int j = 1; j<= i; j++){
        for (int k = 1; k <= i-j; k++){
            cout<<"  ";
        }
        int m = j;
        int f = 2;
        for (int l = 1; l <= 2*j - 1; l++){
            if (m >= 1){
                cout<<m--<<" ";
            }
            else if (m <1){
                cout<<f++<<" ";
                
            }
            else{
                break;
            }
        }
        cout<<endl;
    }
}