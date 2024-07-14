#include <iostream>

using namespace std;

int main(){
    int h;
    int b;
    
    cout<<"What is the height";
    cin>>h;

    cout<<"what is the base";
    cin>>b;

    for (int j = 1;j<=h; j++ ){
        if (j == 1 || j == h){
            for(int l = 1; l <= b; l ++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for (int z = 1; z <= b - 2; z++){
                cout<<" ";
            }
            cout<<"*";
        }
    cout<<endl;
    }

}