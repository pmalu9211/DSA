#include <iostream> 

using namespace std;

int main(){
    int i;

    /*
       
      *   *
     * * * *
    *   *   *

    */

for (int j = 1 ; j <= 3; j++){
    for (int k = 1; k<= i; k++ ){
        if ((j+k)%4==0){
            cout<<"*";
        }
        else if ((j+k)%8==0){
            cout<<"*";
        }
        else if ((j + k)%12 == 0){
            cout<<"*";
        }
        else if(j == 2 && ((k%4 == 0)|| (k%8 ==0)||(k%12==0))){
            cout<<"*";

        }
        else{
            cout<<" ";
        }

    }
    cout<<endl;
}

}


