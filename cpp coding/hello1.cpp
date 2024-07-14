#include <iostream>

using namespace std;

/*  *
   ***
  *****
 *******
*********
    */

int main(){

    int f = 5;

    for (int i = 1; i <=f; i++){
        for (int j = f-i; j > 0 ; j--){
            cout<<" ";
        }
        for (int f = i; f <= 2*(i*2-1); f = f +2){
            cout<<"*";
        }
    cout<<endl;
    }
    
}