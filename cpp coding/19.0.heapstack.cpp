#include <iostream> 
using namespace std;

int main(){
    int* heapVariable = new int(10);
    cout<<heapVariable<<endl;
    cout<<*heapVariable<<endl;
    delete heapVariable;
    heapVariable = NULL;
    heapVariable = new int(50);
    cout<<heapVariable<<endl;
    cout<<*heapVariable<<endl;

    //So the new fuction in the heap is gives an address to the variable

    //Array 
    int* var = new int[4]{1,2,3,4};
    cout<<*var;

    
}