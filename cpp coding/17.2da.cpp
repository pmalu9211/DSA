#include <iostream>

using namespace std;

int main(){
    int i = 3;
    int j = 3;

    int a [i][j] = {{1,2,3},{4,5,6},{7,8,9}};

    // for (int ii = 0; ii < i ; ii++){
    //     for (int jj =0 ; jj < j; jj++){
    //         cin>>a[ii][jj];
    //     }
    // }

    for (int ii = 0; ii<i; ii++){
        for (int jj = 0 ; jj < j; jj++){
            cout<<a[ii][jj] <<" ";
        }
        cout<<endl;
    }
// //    for (int ii = 0; ii < i ; ii++){}
//         for (int jj =0 ; jj < j-1; jj++){
//             cout<<"HELLO : ";
//             cout<<a[0][jj]<<endl;
//         }
//         for (int ii = 0; ii < i -1; ii++){
//             cout<<"HELLO : ";
//             cout<<"VALUE : "<<j<<endl;
//             cout<<a[ii][j]<<endl;

//         }
//         for (int jj = j; jj> 0 ; jj --){
//             cout<<"HELLO : ";
//             cout<<a[i][jj]<<endl;
//         }
//         for (int ii = i; ii > 0 ; ii--){
//             cout<<"HELLO : ";
//             cout<<a[ii][j]<<endl;
//         }
cout<<a[2][2];

for (int c = 0; c < i; c++){
    for (int b = 0; b < j; b++){
        int temp = a[b][c];
        // a[b][c] = a[c][b] ;
        a[c][b] = temp;
    }
}
    for (int ii = 0; ii<i; ii++){
        for (int jj = 0 ; jj < j; jj++){
            cout<<a[ii][jj] <<" ";
        }
        cout<<endl;
    }
    }

