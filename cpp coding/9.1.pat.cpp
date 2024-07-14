#include <iostream>

using namespace std;

int main(){
    int f = 5;
    
    for (int k = 0; k <f; k++){
        for(int l = f-k-1; l>0; l--){
            cout<<" ";
        }
        for (int g = 0; g <= k; g ++){
            cout<<"*";
        }
    cout<<endl;
    }

}