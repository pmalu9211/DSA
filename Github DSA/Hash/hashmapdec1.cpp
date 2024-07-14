#include <iostream>
using namespace std;

class MyHashMap
{
private:
    static const int bucketCount = 1000; // Number of buckets

    // Define a Node for linked list to store key-value pairs
    struct Node
    {
        int key;
        int value;
        Node *next;
        Node(int k, int v) : key(k), value(v), next(nullptr) {}
    };

    Node *buckets[bucketCount];

    // Hash function to map keys to bucket indices
    int hash(int key)
    {
        return key % bucketCount;
    }

public:
    /** Initialize your data structure here. */
    MyHashMap()
    {
        for (int i = 0; i < bucketCount; ++i)
        {
            buckets[i] = nullptr;
        }
    }

    /** Insert a (key, value) pair into the HashMap. If the key already exists, update the corresponding value. */
    void put(int key, int value)
    {
        int hashValue = hash(key);
        Node *current = buckets[hashValue];
        Node *prev = nullptr;
        while (current != nullptr)
        {
            if (current->key == key)
            {
                current->value = value; // Update existing value
                return;
            }
            prev = current;
            current = current->next;
        }
        // If the key is not found, create a new node and add it to the front of the list
        Node *newNode = new Node(key, value);
        if (prev == nullptr)
        {
            buckets[hashValue] = newNode;
        }
        else
        {
            prev->next = newNode;
        }
    }

    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key. */
    int get(int key)
    {
        int hashValue = hash(key);
        Node *current = buckets[hashValue];
        while (current != nullptr)
        {
            if (current->key == key)
            {
                return current->value;
            }
            current = current->next;
        }
        return -1; // Key not found
    }

    /** Removes the key and its corresponding value if this map contains the mapping for the key. */
    void remove(int key)
    {
        int hashValue = hash(key);
        Node *current = buckets[hashValue];
        Node *prev = nullptr;
        while (current != nullptr)
        {
            if (current->key == key)
            {
                if (prev == nullptr)
                {
                    buckets[hashValue] = current->next;
                }
                else
                {
                    prev->next = current->next;
                }
                delete current;
                return;
            }
            prev = current;
            current = current->next;
        }
    }
};

// Example usage
int main()
{
    MyHashMap myHashMap;
    myHashMap.put(1, 1);              // The map is now [[1,1]]
    myHashMap.put(2, 2);              // The map is now [[1,1], [2,2]]
    cout << myHashMap.get(1) << endl; // return 1
    cout << myHashMap.get(3) << endl; // return -1 (i.e., not found)
    myHashMap.put(2, 1);              // The map is now [[1,1], [2,1]] (update the existing value)
    cout << myHashMap.get(2) << endl; // return 1
    myHashMap.remove(2);              // remove the mapping for 2, The map is now [[1,1]]
    cout << myHashMap.get(2) << endl; // return -1 (i.e., not found)
    return 0;
}
