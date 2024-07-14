#include <iostream>
using namespace std;


//tail recursion
void print(int n){
    if(n == 0){
        return;
    }

    cout<<n<<endl;
    return print(n-1);

}


//head recursion
void printl(int n){
    if(n == 0){
        return;
    }

    printl(n-1);
    cout<<n<<endl;
}
int main(){
    print(5);
    cout<<endl;

    printl(5);
}