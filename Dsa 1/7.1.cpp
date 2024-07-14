#include <iostream>
using namespace std;

int getsum(int a[], int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum+=a[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;

    //variable size of array
    int* arr = new int[n];

    cout<<"The arr = "<<arr<<endl;

    //taking input in array
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }

    int ans = getsum(arr,n);

    cout<<"the asn "<<ans;

    int *a = new int;
    *a = 5;
    cout<<*a<<endl;
    

}