#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int pointer_to_pointer()
{
    int x = 10;            // normal value
    int *ptr = &x;         // ptr points to memory location of x
    int **ptrToPtr = &ptr; //&ptr is the memory location of where ptr is stored
    cout << ptrToPtr << endl;
    cout << *ptr << endl;
    // cout <<  << endl;
    return 0;
}

int heap_pointer()
{
    int *ptr = nullptr;

    // Allocate memory for a single integer on the heap
    ptr = new int;

    // Assign a value to the allocated memory
    *ptr = 20;

    // Output the value stored at the allocated memory
    std::cout << "Value: " << *ptr << std::endl; // Output: 20

    // Free the allocated memory
    delete ptr;

    // Set the pointer to nullptr to avoid dangling pointer
    ptr = nullptr;

    return 0;
}

int heap_arr_ptr()
{

    // Declare a pointer to an array of integers
    int *arr = nullptr;

    // Allocate memory for an array of 5 integers on the heap
    arr = new int[5];

    // Assign values to the allocated memory
    for (int i = 0; i < 5; ++i)
    {
        arr[i] = i * 10;
    }

    // Output the values stored in the allocated memory
    for (int i = 0; i < 5; ++i)
    {
        std::cout << "Value at arr[" << i << "]: " << arr[i] << std::endl;
    }

    // Free the allocated memory
    delete[] arr;

    // Set the pointer to nullptr to avoid dangling pointer
    arr = nullptr;

    return 0;
}

int main()
{
    int a = 0;
    cout << "Give a" << endl;
    cin >> a;
    if (a == 0)
    {

        // Pointers point to an location in memory

        int *ptr; // This is how you initiate an pointer
                  // This points to a dummy location that can't be accessed

        int x = 10;
        ptr = &x;     //
        int y = *ptr; // y is 10, we use this syntax to accesss the value stored at that pointer Derefrencing the pointer
        cout << y << endl;

        int arr[5] = {1, 2, 3, 4, 5};
        ptr = arr; // ptr points to the first element of arr
        cout << *ptr << endl;

        ptr++; // now ptr points to the second element of arr (arr[1])
        cout << *ptr << endl;

        Node *nodePtr = new Node;
        nodePtr->data = 10; // equivalent to (*nodePtr).data = 10
        cout << nodePtr->data;
        (*nodePtr).data = 15;
        cout << nodePtr->data;
    }
    else if (a == 1)
    {
        pointer_to_pointer();
    }
}