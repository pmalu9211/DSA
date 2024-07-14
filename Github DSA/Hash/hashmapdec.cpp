#include <vector>
#include <list>
#include <utility>
using namespace std;

class MyHashMap
{
private:
    vector<list<pair<int, int>>> buckets;
    int bucketCount;

    // Hash function to map keys to bucket indices
    int hash(int key)
    {
        return key % bucketCount;
    }

public:
    /** Initialize your data structure here. */
    MyHashMap()
    {
        bucketCount = 1000; // Number of buckets
        buckets.resize(bucketCount);
    }

    /** value will always be non-negative. */
    void put(int key, int value)
    {
        int hashValue = hash(key);
        auto &bucket = buckets[hashValue];
        for (auto &pair : bucket)
        {
            if (pair.first == key)
            {
                pair.second = value; // Update existing value
                return;
            }
        }
        bucket.push_back(make_pair(key, value)); // Insert new key-value pair
    }

    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key)
    {
        int hashValue = hash(key);
        auto &bucket = buckets[hashValue];
        for (const auto &pair : bucket)
        {
            if (pair.first == key)
            {
                return pair.second; // Return the value
            }
        }
        return -1; // Key not found
    }

    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key)
    {
        int hashValue = hash(key);
        auto &bucket = buckets[hashValue];
        for (auto it = bucket.begin(); it != bucket.end(); ++it)
        {
            if (it->first == key)
            {
                bucket.erase(it); // Remove the key-value pair
                return;
            }
        }
    }
};

// Example usage
int main()
{
    MyHashMap myHashMap;
    myHashMap.put(1, 1); // The map is now [[1,1]]
    myHashMap.put(2, 2); // The map is now [[1,1], [2,2]]
    myHashMap.get(1);    // return 1
    myHashMap.get(3);    // return -1 (i.e., not found)
    myHashMap.put(2, 1); // The map is now [[1,1], [2,1]] (update the existing value)
    myHashMap.get(2);    // return 1
    myHashMap.remove(2); // remove the mapping for 2, The map is now [[1,1]]
    myHashMap.get(2);    // return -1 (i.e., not found)
    return 0;
}
