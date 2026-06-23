#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include <cstdlib>
#include <stdexcept>

template<typename T>
class DynamicArray
{
private:
    T* data;
    int currentSize;
    int currentCapacity;
    void resize(int newCapacity);

public:
    
    DynamicArray();
    DynamicArray(const DynamicArray& other);
    DynamicArray& operator=(const DynamicArray& other);
    ~DynamicArray();

    void append(const T& value);
    void insert(int index, const T& value);
    void remove(int index);

    T get(int index) const;
    void set(int index, const T& value);

    int size() const;
    int capacity() const;
    bool isEmpty() const;
    void clear();
};

#endif

template<typename T>
DynamicArray<T>::DynamicArray()
{
    currentSize = 0;
    currentCapacity = 8;

    data = (T*)malloc(currentCapacity * sizeof(T));

    if(data == nullptr)
    {
        throw std::bad_alloc();
    }
}

template<typename T>
DynamicArray<T>::~DynamicArray()
{
    free(data);
    data = nullptr;
}

template<typename T>
int DynamicArray<T>::size() const
{
    return currentSize;
}

template<typename T>
int DynamicArray<T>::capacity() const
{
    return currentCapacity;
}

template<typename T>
bool DynamicArray<T>::isEmpty() const
{
    return currentSize == 0;
}
