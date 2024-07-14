#include<bits/stdc++.h>
using namespace std;

bool custom1(int a[], int b[]){
    return a[1] > b[1];
}

int main(){
    int arr[2][5] = {{435, 234, 123, 56, 52}, {34, 343, 456, 24, 54}};

    // Correct the range for sorting and use custom1 as the comparison function
    sort(&arr[0][0], &arr[0][0] + 2 * 5, custom1);

    cout << "Sorted 2D array based on the second column:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}