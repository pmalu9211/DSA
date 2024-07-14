#include <iostream>

using namespace std;

int main(){
    int c;
    cout<<"Hello : ";
    cin>>c;

    int a[c];
    for(int ll = 0; ll<c; ll++){
        cout<<"term : "<<endl;
        int g;
        cin>>g;
        a[ll] = g;
    
        }


    int max = a[0];
    int min = a[0];
    for(int l = 0; l<c; l++){
        if (max < a[l]){
            max = a[l];
        } 

        
        if (min > a[l]){
            min = a[l];}
        

    }
    cout<<"max number is : "<<max<<endl;
    cout<<"Min number is : "<<min<<endl;
}