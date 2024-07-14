#include<iostream>
#include<vector>
using namespace std;
int main(){
int a[6] = {1,1,7,0,0,0};
int b[3] = {2,5,6};

int a1 = 0; int b1 = 0; int c = 3;

while(a1<=5){
    if(a[a1]<=b[b1]){a1++;}
    else{
        int temp = a[a1+1];
        a[a1+1] = b[b1];
        a[a1+1+1] = temp;

        b1++;
    }


}
for(int i = 0; i<6; i++){
    cout<<a[i]<<endl;
}
}