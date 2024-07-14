#include <iostream>
using namespace std;

//dynamic 2d array --

int main(){
    int row;
    int col;
    cin>>row;
    cin>>col;

    int** arr = new int*[row];

    for(int i = 0; i<row; i++){
        arr[i] = new int[col];
        
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        } 
        cout<<endl;
    }

    //freeing the dynamic memory
    for(int i = 0; i<row; i++){
        delete [] arr[i];
    }
    delete [] arr;


}