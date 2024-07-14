//binary search in a rotated sorted array

#include <iostream>
using namespace std;

int main(){
    int a[7] = {4,5,6,7,1,2,3};
    int k = 6;
    int start = 0;
    int end = 6;
    int mid = (start+ end)/2;
    while(start>=end){
        if(a[mid == k]){
            cout<<mid<<endl;
            break;
        }
        else if(k>= a[0]){
            if(a[mid]>=a[0]){
                end = mid -1;
            }
            else start = mid + 1;
        }
        else{
            if ()
        }
        // else if(a[mid] >= a[start] && a[mid] <= k){
        //     start = mid + 1;

        // }
        // else if(a[mid] >= a[start] && a[mid] >= k){
        //     end = mid - 1;
        // }
        // else if(a[mid] < a[start] && a[mid] <= k)
    }
    
}