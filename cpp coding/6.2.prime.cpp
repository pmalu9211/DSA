#include <iostream>

using namespace std;

int main(){
    int s;

    cout<<"starting number : "; cin>>s;

    for (int i = 3; i <= s; i++){
        if (s % (i-1) == 0){
            cout<<"not a prime";
            break;
        }
        else if (i == s){
                cout<<"prime";
        }

    }
    


}