#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int k = 11;
    int s,f,m;
    s = 0;
    f = n-1;
    m = (f+s)/2;
    
    int a[n] = {11,12,13,14,15,16,17,18,19,20};
    // n = (n)/2;
    while(s<=f ){
        
        if(a[m] == k){
            cout<<m<<endl;
            break;
        }
        else if(a[m] > k){
            f = m - 1;
            m = (f+s)/2;
            cout<<m<<" : "<<endl;
        }
        else{
            s = m + 1;
            m = (f+s)/2;
            cout<<m<<": "<<endl;
        }
        
    }

}