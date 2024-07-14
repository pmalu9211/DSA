#include <bits/stdc++.h>
using namespace std;

class MyHashSet
{
private:
    vector<vector<int>> buckets;
    int hash(int key)
    {
        return key % buckets.size();
    }

public:
    /** Initialize your data structure here. */
    MyHashSet()
    {
        buckets.resize(10);
    }

    void add(int key)
    {
        int hashValue = hash(key);
        for (int k : buckets[hashValue])
        {
            if (k == key)
                return;
        }
        buckets[hashValue].push_back(key);
    }

    void remove(int key)
    {
        int hashValue = hash(key);
        auto &bucket = buckets[hashValue];
        for (auto it = bucket.begin(); it != bucket.end(); ++it)
        {
            if (*it == key)
            {
                bucket.erase(it);
                return;
            }
        }
    }

    /** Returns true if this set contains the specified element */
    bool contains(int key)
    {
        int hashValue = hash(key);
        for (int k : buckets[hashValue])
        {
            if (k == key)
                return true;
        }
        return false;
    }
};

int main()
{
    MyHashSet *myHashSet = new MyHashSet();
    myHashSet->add(1);              // set = [1]
    myHashSet->add(2);              // set = [1, 2]
    cout << myHashSet->contains(1); // return True
    cout << myHashSet->contains(3); // return False, (not found)
    myHashSet->add(2);              // set = [1, 2]
    myHashSet->contains(2);         // return True
    myHashSet->remove(2);           // set = [1]
    myHashSet->contains(2);         // return False, (already removed)
}

/*

In C++, objects can be created in two main ways: automatic (stack) allocation and dynamic (heap) allocation. The choice between these methods depends on the specific needs of your program. Let's explore the differences between the two methods and why we might choose one over the other.

Automatic (Stack) Allocation
When you declare an object without using the new keyword, it is created on the stack. For example:

cpp
Copy code
MyHashSet myHashSet;
Characteristics:

Scope and Lifetime: The object myHashSet will be automatically destroyed when it goes out of scope, such as when the function in which it was created returns.
Performance: Stack allocation and deallocation are generally faster than heap operations because they simply involve adjusting the stack pointer.
Memory Management: The memory is automatically managed, reducing the risk of memory leaks.
Size Limitation: Stack size is usually limited, which can be a problem for very large objects or deep recursion.
Dynamic (Heap) Allocation
When you create an object using the new keyword, it is allocated on the heap. For example:

cpp
Copy code
MyHashSet* myHashSet = new MyHashSet();
Characteristics:

Scope and Lifetime: The object myHashSet will persist until you explicitly delete it using the delete keyword. This gives you more control over the object's lifetime.
Performance: Heap allocation and deallocation are generally slower than stack operations due to the complexity of managing heap memory.
Memory Management: You must manually manage the object's memory, calling delete to avoid memory leaks. For example:
cpp
Copy code
delete myHashSet;
Size Flexibility: The heap is usually much larger than the stack, allowing for the allocation of large objects or large numbers of objects.
Example with Both Methods
cpp
Copy code
#include <iostream>
using namespace std;

class MyHashSet {
public:
    MyHashSet() {
        // Constructor code
        cout << "MyHashSet created" << endl;
    }
    ~MyHashSet() {
        // Destructor code
        cout << "MyHashSet destroyed" << endl;
    }
    void add(int key) {
        // Add key to hash set
    }
    bool contains(int key) {
        // Check if key is in hash set
        return false;
    }
    void remove(int key) {
        // Remove key from hash set
    }
};

int main() {
    // Stack allocation
    MyHashSet myHashSet; // Automatically destroyed at the end of scope
    myHashSet.add(1);

    // Heap allocation
    MyHashSet* myHashSetPtr = new MyHashSet(); // Must be manually deleted
    myHashSetPtr->add(2);

    // Check if contains 2
    if (myHashSetPtr->contains(2)) {
        cout << "myHashSetPtr contains 2" << endl;
    }

    // Remove key 2
    myHashSetPtr->remove(2);

    // Explicitly delete the heap-allocated object
    delete myHashSetPtr;

    return 0;
}
Summary
Automatic (Stack) Allocation: Simpler and faster, with automatic memory management. Suitable for smaller, short-lived objects.
Dynamic (Heap) Allocation: Offers more control over the object's lifetime and size but requires manual memory management, which can introduce complexity and potential memory leaks.
In the context of your original MyHashSet class, using automatic allocation (i.e., declaring MyHashSet myHashSet;) is often sufficient and preferable for simplicity and performance, especially if the hash set is not too large and does not need to persist beyond the current scope.

*/