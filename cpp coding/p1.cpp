#include <iostream>
#include <algorithm>
using namespace std;

// int add(int a[], int n){
//     int sum = 0;
//     for (int i = 0; i< n; i++){
//         sum += a[i];
//     }
//     return sum;
// }

// int main(){
//     int a[3] = {1,2,3};
//     // cout<<add(a,3);
//     int* k = a;
//     cout<<*k<<endl;

// }

// int main(){
//     int a[19] = {1,2,3,4,5,6,7,8,9,10};
//     int* b = a;
//     for(int i = 0; i<10; i++){
//         cout<<*b<<endl;
//         b++;
//     }
// }

// CPP program to check whether
// the array is circularly sorted

// #include <bits/stdc++.h>
// using namespace std;

// // Function to check whether
// // array is circularly sorted
// bool checkCircularSorted(int arr[], int n)
// {

// 	// cnt variable will store count of
// 	// arr[i-1] > arr[i]
// 	int cnt = 0;

// 	for (int i = 1; i < n; i++) {

// 		// increase cnt if arr[i-1] > arr[i]
// 		if (arr[i - 1] > arr[i]) {
// 			cnt++;
// 		}
// 	}

// 	// if cnt > 1 then false
// 	// else true
// 	if (cnt == 1) {
// 		// check first and last element.
// 		return arr[0] > arr[n-1];
// 	}
// 	else {
// 		return false;
// 	}
// }

// // Driver code
// int main()
// {

// 	// Given array
// 	int arr[] = {2,3,4,5,1};

// 	// size of array
// 	int N = sizeof(arr) / sizeof(arr[0]);

// 	// Calling function to check
// 	// cirularly sorted array
// 	bool result = checkCircularSorted(arr, N);

// 	// Print result
// 	if (result) {
// 		cout << "Array is circularly sorted";
// 	}
// 	else {
// 		cout << "Array is not circularly sorted";
// 	}
// }
int main(){
    int a[5] = {1,3,2,9,8};
    int k = sizeof(a)/sizeof(a[1]);
    sort(a,a+k-1);
    cout<<k<<endl;
    for(int i =0; i<k; i++){
        cout<<a[i]<<endl;
    }
}