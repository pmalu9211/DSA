#include <iostream>

using namespace std;

int main(){
    int numbers[5] = {1, 2, 3, 4, 5};
    cout<<*numbers<<endl;

int* ptr = numbers;  // Assigns the address of the first element to the pointer
cout<<ptr<<endl;

int firstElement = *ptr;  // Dereferences the pointer to access the value of the first element
cout<<firstElement<<endl;

int secondElement = *(ptr + 1);  // Dereferences the pointer after advancing it by one position
cout<<secondElement<<endl;

// Alternatively, you can use array indexing with pointers
int thirdElement = ptr[2];  // Accesses the value of the third element using array indexing

}