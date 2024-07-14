#include <iostream>

using namespace std;

int main(){
    int a[2] = {1,2};
    int n = 2;

    /*longest arethematic array */

    int dif = a[0] - a[1];
    int max = 2;
    int term = 0;
    int cm = 0;

    for (int i = 1;i<n; i++ ){
        int tempdiff;
        tempdiff = a[i] - a[i+1];
        if (dif == tempdiff){
            term++;}
        else{if (term > cm){
            cm = term;
        }
            term = 0;}
        dif = a[i] - a[i + 1];
        }
        cout<<cm +  2<<endl;
}