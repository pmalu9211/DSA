#include<iostream>
using namespace std;

//bubble sort is the when you compare the elemnts from index 0 to n-1

int main(){
    int a[6] = {5,2,7,3,8,2};

    for(int i = 0; i<6-1;i++){
        bool swap = false;
        for(int j = 0; j < 6 - i - 1; j++){
            if(a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swap = true;
                if(swap == false){
                break;
                
            }
            
        }
        
        }
    }

    for (int i = 0; i<6; i++){
        cout<<a[i]<<endl;
    }

}
