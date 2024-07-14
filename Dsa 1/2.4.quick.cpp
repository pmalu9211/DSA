#include <iostream>
using namespace std;

int main(){
    int a[6] = {5,2,7,8,1,6};
    // int piv = a.last();
    int len = sizeof(a)/sizeof(a[0]);
    // cout<<" length is : "<<len<<endl;
    int piv = len-1;
    int s = 0; int e = len - 2;
    // int i = s; int j = e;
    int si, sj;
    while (s<=e)
    {
        if(a[s] > a[piv]){
            si = s;
            cout<<"si = "<<si<<endl;
        }
        if(a[e] < a[piv]){
            sj = e;
            cout<<"sj = "<<sj<<endl;
        }
        s++;
        e--;
    }
    
        // for(int i = s; i<len -1 ; i++){
        //     if(a[i] > a[piv])
        //     {si = i;
        //     cout<<"si = "<<si<<endl;
        //     break;}
        // }
        // for(int j = e ; j>0; j--){
        //     if(a[j] < a[piv]) {
        //         sj = j;
        //         cout<<"sj = "<<sj<<endl;
        //     break;}
        // }

        swap(a[si],a[sj]);
        
    
    for (int i = 0; i<len; i++){
        cout<<a[i]<<endl;
    }}
    
    

