#include <iostream>
using namespace std;

void max_hipify(int arr[], int i, int n){
    int hightst = i;
    int lc = i*2 + 1;
    int rc = i*2 +2;

    if(lc < n && arr[lc] > arr[hightst])
        hightst = lc;
    
    if(rc < n && arr[rc] > arr[hightst])
        hightst = rc;
    
    if(hightst != i){
        swap(arr[hightst], arr[i]);

        max_hipify(arr, hightst, n);
    }
}

void min_hipify(int arr[], int i, int n){
    int lowest = i;
    int lc = i*2 + 1;
    int rc = i*2 +2;

    if(lc < n && arr[lc] < arr[lowest])
        lowest = lc;
    
    if(rc < n && arr[rc] < arr[lowest])
        lowest = rc;
    
    if(lowest != i){
        swap(arr[lowest], arr[i]);

        min_hipify(arr, lowest, n);
    }
}

void print(int arr[]){
        for(int i = 0; i<7 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void heap_sort(int arr[], int size ){

    for(int i = size/2; i>= 0; i--){
        max_hipify(arr, i, size);
    }
    cout<<"---------------------------"<<endl;
        print(arr);

    for(int i = size-1; i>= 0; i--){
        swap (arr[i], arr[0]);
        print(arr);
        max_hipify(arr, 0 ,--size);
    }
    cout<<"---------sorted"<<endl;
    print(arr);
    

}

void min_heapsort(int arr[], int size){
    for(int i = size/2; i>= 0; i--){
        //  cout<<"------"<<endl;
        // cout<<arr[i]<<endl;
        min_hipify(arr,i,size);
    }
    
    for(int i = 1; i<size-1;i++){
        cout<<"------"<<endl;
        cout<<arr[i]<<endl;
        min_hipify(arr+i,0,size-i);
    }
    print(arr);
}



int main(){
    int arr[7] = {5,3,7,2,92,0,4};
    // for(int i = 7/2; i>=0; i--)
    // max_hipify(arr, i, 7);

    // for(int i = 0; i<7 ; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // for(int i = 7/2; i>=0; i--)
    // min_hipify(arr,i,7);

    // for(int i = 0; i<7 ; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // heap_sort(arr,7);
    min_heapsort(arr,7);

}