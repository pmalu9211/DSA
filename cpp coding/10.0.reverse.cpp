#include <iostream>

using namespace std;

int main(){
    int i = 6372;


    int num = 0;
    int in = i;

    while(i > 0){
        num = num*10 + i%10;
        i = (i - i%10)/10;

        
    }
    cout<<num<<endl;
}