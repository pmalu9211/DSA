#include <iostream>
#include <math.h>

using namespace std;

// int bi(int a){
//     int b = 1;
//     int sum = 0;
//     int gg = 1;
//     while (a >= 0 )
//     {
//         gg = a - (a/2)*2;
//         sum = gg + sum;
//         a = a/2;
    

//     }  
//     return sum;
//     }

// int main(){
//     cout<<bi(8);

// }

// int bi(int a){
//     int sum = 1;
//     int b = 0;
//     while (a>0){

//         b = a%2;
//         while (b == 0){}
//         sum = b + sum*10;
//         a = a/2;
//     }
//     return sum;
// }
// int main(){
//     cout<<bi(8);
// }
int main(){
    int a; 
    int ans;
    int l = 0;
    cin>>a;
    while (a>0){
        ans += (a%2)*pow(10,l);
        l++;
        a = a/2;
    }
    cout<<ans;
}
