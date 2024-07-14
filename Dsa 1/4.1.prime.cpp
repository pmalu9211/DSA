#include <iostream>
#include <vector>

using namespace std;

int main(){
    //seive of errectus
    //cutting the number which are multiple of the number 
    int n = 44;
    vector <bool> prime (n+1,true);
    prime[0] = prime[1] = false;
    int count = 0;

    for(int i = 2; i<n;i++){
        if (prime[i]){
            count++;
        }
        for(int j = i*2; j<n; j+=i){
            prime[j] = false;
        }
    }
    cout<<count<<endl;
}