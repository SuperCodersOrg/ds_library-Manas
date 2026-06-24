#include "../Linked List/Linked_list.h"
#include "../Dynamic array/Dynamic_array.h"

template<typename K, typename V>
struct Entry
{
    K key;
    V value;

    Entry()
    {
    }

    Entry(
        const K& newKey,
        const V& newValue
    )
    {
        key = newKey;
        value = newValue;
    }
};

template<typename K>
class DefaultHasher
{
public:
    int hash(const K& key,int bucketCount) const
    {
        return 0;
    }
};

template<>
class DefaultHasher<int>
{
public:
    int hash(const int& key,int bucketCount) const
    {
        return key % bucketCount;
    }
};

template<>
class DefaultHasher<char>
{
public:
    int hash(const char& key,int bucketCount) const
    {
        return ((int)key) % bucketCount;
    }
};
template<>
class DefaultHasher<std::string>
{
public:
    int hash(
        const std::string& key,
        int bucketCount
    ) const
    {
        unsigned long hash = 0;
        for(int i = 0; i < key.length(); i++)
        {
            hash = hash * 31 + key[i];
        }
        return hash % bucketCount;
    }
};

template<typename K, typename V>
class HashMap
{
private:
    DynamicArray<LinkedList<Entry<K,V>>> buckets;
    int currentSize;
    int bucketCount;
    DefaultHasher<K> hasher;

public:
    HashMap();
    HashMap(const HashMap& other);
    HashMap& operator=(const HashMap& other);
    ~HashMap();
    void put(const K& key,const V& value);
    V get(const K& key) const;
    bool containsKey(const K& key) const;
    void remove(const K& key);
    void clear();
    int size() const;
    bool isEmpty() const;
};

