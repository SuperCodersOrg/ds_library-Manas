template<typename K, typename V>
HashMap<K,V>::HashMap()
{
    currentSize = 0;
    bucketCount = 8;

    for(int i = 0; i < bucketCount; i++)
    {
        buckets.append(
            LinkedList<Entry<K,V>>()
        );
    }
}

template<typename K, typename V>
HashMap<K,V>::HashMap(const HashMap& other)
{
    buckets = other.buckets;
    currentSize = other.currentSize;
    bucketCount = other.bucketCount;
}

template<typename K, typename V>
HashMap<K,V>& HashMap<K,V>::operator=(const HashMap& other)
{
    if(this == &other)
    {
        return *this;
    }
    buckets = other.buckets;
    currentSize = other.currentSize;
    bucketCount = other.bucketCount;
    return *this;
}

template<typename K, typename V>
int HashMap<K,V>::size() const
{
    return currentSize;
}

template<typename K, typename V>
void HashMap<K,V>::rehash()
{
    DynamicArray<LinkedList<Entry<K,V>>> oldBuckets = buckets;
    bucketCount = bucketCount * 2;
    buckets.clear();
    for(int i = 0; i < bucketCount; i++)
    {
        buckets.append(LinkedList<Entry<K,V>>());
    }
    int oldSize = currentSize;
    currentSize = 0;
    for(int i = 0; i < oldBuckets.size(); i++)
    {
        LinkedList<Entry<K,V>>& bucket = oldBuckets.get(i);
        for(int j = 0; j < bucket.size(); j++)
        {
            Entry<K,V> entry = bucket.get(j);
            put(entry.key,entry.value);
        }
    }
    currentSize = oldSize;
}

template<typename K, typename V>
bool HashMap<K,V>::isEmpty() const
{
    return currentSize == 0;
}

template<typename K, typename V>
bool HashMap<K,V>::containsKey(const K& key) const
{
    int index = hasher.hash(key,bucketCount);
    LinkedList<Entry<K,V>> bucket = buckets.get(index);
    for(int i = 0; i < bucket.size(); i++)
    {
        Entry<K,V> entry =  bucket.get(i);
        if(entry.key == key)
        {
            return true;
        }
    }
    return false;
}
template<typename K, typename V>
V HashMap<K,V>::get(const K& key) const
{
    int index =hasher.hash(key,bucketCount);
    LinkedList<Entry<K,V>> bucket = buckets.get(index);
    for(int i = 0; i < bucket.size(); i++)
    {
        Entry<K,V> entry =bucket.get(i);
        if(entry.key == key)
        {
            return entry.value;
        }
    }
    throw std::out_of_range(
        "Key not found"
    );
}

template<typename K, typename V>
void HashMap<K,V>::put(const K& key,const V& value)
{
    if(currentSize * 4 >= bucketCount * 3)
    {
        rehash();
    }
    int index = hasher.hash(key,bucketCount);
    LinkedList<Entry<K,V>>& bucket = buckets.get(index);
    for(int i = 0; i < bucket.size(); i++)
    {
        if(bucket.get(i).key == key)
        {
            bucket.get(i).value = value;
            return;
        }
    }
    bucket.pushBack(Entry<K,V>(key,value));
    currentSize++;
}

template<typename K, typename V>
void HashMap<K,V>::remove(const K& key)
{
    int index =hasher.hash(key,bucketCount);
    LinkedList<Entry<K,V>>& bucket = buckets.get(index);
    for(int i = 0; i < bucket.size(); i++)
    {
        if(bucket.get(i).key == key)
        {
            bucket.remove(i);
            currentSize--;
            return;
        }
    }
    throw std::out_of_range("Key not found");
}

template<typename K, typename V>
void HashMap<K,V>::clear()
{
    for(int i = 0; i < bucketCount; i++)
    {
        buckets.get(i).clear();
    }
    currentSize = 0;
}
