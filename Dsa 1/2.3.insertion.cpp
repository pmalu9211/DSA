#include <iostream>
using namespace std;
//In insertion sort we treat the numbers like cards and we sort them by
//by putting a number that is less than other while triversing in the left
// the it is not the least number, or if it is then it goes to the leaftmost

int main(){
    int a[6] = {6,3,7,3,8,3};

    for(int i = 1; i<6; i++){
        int key = a[i];
        int j = i - 1;
        while (key < a[j] && j>= 0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        
    }
    for(int i = 0; i<6;i++){
        cout<<a[i]<<endl;
    }
}