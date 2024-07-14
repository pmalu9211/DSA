#include<iostream>

using namespace std;

int main(){
    int s,f;

    cout<<"starting :";
    cin>>s;
 
    cout<<"Ending :";
    cin>>f;
    int i = 2;
    for(s; s<f; s++){
        ;
        for(i = 2; i < s; i++ ){
            if(s%i == 0){
                break;
            }
        }
        if (i == s){
            cout<<s<<endl;
        }
    }
}