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

template<typename T>
void DynamicArray<T>::resize(int newCapacity)
{
    T* temp = (T*)realloc(data, newCapacity * sizeof(T));

    if(temp == nullptr)
    {
        throw std::bad_alloc();
    }

    data = temp;
    currentCapacity = newCapacity;
}

template<typename T>
void DynamicArray<T>::append(const T& value)
{
    if(currentSize == currentCapacity)
    {
        resize(
            currentCapacity +
            currentCapacity / 2
        );
    }

    data[currentSize] = value;

    currentSize++;
}

template<typename T>
T DynamicArray<T>::get(int index) const
{
    if(index < 0 || index >= currentSize)
    {
        throw std::out_of_range("Invalid index");
    }

    return data[index];
}

template<typename T>
void DynamicArray<T>::set(int index, const T& value)
{
    if(index < 0 || index >= currentSize)
    {
        throw std::out_of_range("Invalid index");
    }

    data[index] = value;
}

template<typename T>
void DynamicArray<T>::insert(int index, const T& value)
{
    if(index < 0 || index > currentSize)
    {
        throw std::out_of_range("Invalid index");
    }
    if(currentSize == currentCapacity)
    {
        resize(currentCapacity + currentCapacity / 2);
    }
    for(int i = currentSize; i > index; i--)
    {
        data[i] = data[i - 1];
    }
    data[index] = value;
    currentSize++;
}

template<typename T>
void DynamicArray<T>::remove(int index)
{
    if(index < 0 || index >= currentSize)
    {
        throw std::out_of_range("Invalid index");
    }
    for(int i = index; i < currentSize - 1; i++)
    {
        data[i] = data[i + 1];
    }
    currentSize--;
}