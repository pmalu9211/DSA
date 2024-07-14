#include <iostream>

using namespace std;

int main(){
    int a[5] = {1,2,3,4,5};
    int n = 5;
    int sum = 0;
    for (int k = 0; k < n; k++){
        for (int i = 0; i<n ; i++){
            for (int j = k; j<n-i; j++){
                sum = sum + a[j];
            }
    }
    }
cout<<sum;
}