#include <iostream>

using namespace std;

int main (){
  int a = 10;
  int *j;
  // *j = a;
  cout<<j<<endl;
  cout<<&a<<endl;
  cout<<*j<<endl;
  cout<<j++<<endl;
  cout<<j<<endl;
  cout<<*j<<endl;
    //We can perform operation in the original variable by using it's location
    //in the pointer
}
