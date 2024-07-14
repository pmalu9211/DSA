#include <iostream>
using namespace std;

//Finding the min. element and putting it at the starting index
//loop from 0 to n-1 and j+1 to n-1
//Space complexity is O(1)
// Time complexity is O(n^2)
//Used for small case scinerio 

int main(){
    int a[6] = {5,3,6,2,7,1};

    for(int i = 0; i< 6 ; i++){
        int min = i;
        for (int j = i+1 ; j < 6; j++){

            if(a[min] < a[j])
            min = j;

        }
        swap(a[i] , a[min]);
        
    }
    for (int i = 0; i<6; i++){
        cout<<a[i]<<endl;
    }
    
}