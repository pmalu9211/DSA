#include <iostream>

using namespace std;

int main(){
    int aa = 3;
    int bb = 3;


    int a[aa][bb] = {{1,2,3},{4,5,6},{7,8,9}};

    int b[aa][bb] = {{1,2,3},{4,5,6},{7,8,9}};

    int ans[bb][aa];

    for (int i = 0; i < aa ; i++){
        for (int j = 0; j < bb ; j++){
            int term = 0;
            for (int k = 0; k < bb; k++){
                term = a[i][k]*b[k][j] + term;
                // cout<<term<<endl;
                // cout<<"i : "<<i<<endl;
                // cout<<"j : "<<j<<endl;
            }
            ans[i][j] = term;
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


}
