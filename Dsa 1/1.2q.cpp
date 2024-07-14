#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int f = 0; 
    int l = n-1;
    int m = (f+l)/2;
    int a[n] = {1,4,5,6,7,8,6,4,2,1};

    while(l>= f){
        if(a[m-1] <= a[m] && a[m]>= a[m+1] ){
            cout<<m<<endl;
            break;
        }
        else if(a[m-1]>=a[m]){
            l = (m-1);
            cout<<"m in else if : "<<m<<endl;
        }
        else{
            f = m+1;
            cout<<"m in else : "<<m<<endl;
        }
        m = (f+l)/2;
    }
}