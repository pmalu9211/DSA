#include <iostream>
#include <climits>

using namespace std;

int main(){
    /*
    Basic addition of subarray
    */
    int len;
    cout<<"what length array : ";
    cin>>len;

    int a[len];

    for (int i = 0; i < len; i++){
        int in;
        cin>>in;
        a[i] = in;}
    int csum = 0;
    int maxsum = INT_MIN;
    
    for (int i = 0; i < len ; i ++){
        csum = a[i] + csum;
        if (csum < 0 ){
            csum = 0;
        }
        maxsum = max(maxsum, csum);

    }
    cout<<maxsum;

}