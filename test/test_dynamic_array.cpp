#include <iostream>
#include "../include/DynamicArray/Dynamic_array.h"

using namespace std;

int main()
{
    try
    {
        DynamicArray<int> arr;

        cout << "Size: " << arr.size() << endl;
        cout << "Capacity: " << arr.capacity() << endl;
        cout << "Is Empty: " << arr.isEmpty() << endl;
    }
    catch(const std::bad_alloc& e)
    {
        cout << "Memory allocation failed!" << endl;
    }

    return 0;
}