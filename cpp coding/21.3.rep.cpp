#include <iostream>

using namespace std;

int findpos(int a){
    int j = 0;
    int count = 0;
    while (j != 1){
        j = (a & (1<<count));
        
        count ++;

    }
    count--;
    return count;

}

int rep(int a[], int n){
    int sum = 0;
    for (int i = 0; i<n; i++){
        sum = sum^a[i];
    }
    return sum;
}




int main(){
    //We are going to find the two repeating terms in the given array
    int a[] = {1,2,3,4,5,3,2,1};
    int n = 8;
    /*
    100 ^ 101 = 001;
    */
   //when xor of the two numbers takies place there is a 1 in some position 
   //which is the reults of only one number 
   // we are going to isolate it first and then find the other
    int t =  rep(a,n);
    int pos = findpos(t);
    int ss = 0;

    for (int i = 0; i<n; i++){
        if (a[i]&1<<pos){
            ss= ss^a[i];

        }
    }
    cout<<ss<<endl;
    cout<<(t^ss);


}