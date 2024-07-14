#include <iostream>

using namespace std;

int main(){
    cout<<"Array length : ";
    int len;
    cin>>len;
    int a[len];

    for (int i = 0; i<len; i++){
        cout<<"term : ";
        int j;
        cin>>j;
        a[i] = j;
    }
    int till;
    cout<<"till? : ";
    cin>>till;
int max = a[0];
    for (int jj = 0; jj < till; jj++){
        if (a[jj] > max){
            max = a[jj];
        }
        
    }
    cout<<max;
}