#include <iostream>
using namespace std;

//passing by reference 
void inc(int &l){
    l = l + 1000;
    return;
}

int main(){
    int a = 5;
    int &b = a;
    cout<<++b;
    cout<<" "<<a<<endl;
    
    inc(a);
    cout<<" "<<a<<endl;





    

}