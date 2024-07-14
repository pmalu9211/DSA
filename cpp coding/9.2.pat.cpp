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
    }


    for (int i = 1; i <=((f*2)-1); i = i + 2){

        for (int k=1; k<=i; k++ ){
            cout<<"*";
        }
    cout<<endl;
    }

}