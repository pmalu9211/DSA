#include<iostream>
using namespace std;
int main(){
    int len = 9;
    int s = 0; int f = len - 1; int mid = (s+f)/2;
    int find = 2;
    int a[len] = {1,1,1,2,2,2,4,5,6};

    while (f>=s)
    {
        if(a[mid]== find){
            
            f = mid -1;

        }
        else if(a[mid] > find){
            f = mid - 1;
            
        }
        else{
            s = mid + 1;
            
        }
        mid = (s+f)/2;
    }
    cout<<mid<<endl;
    
}