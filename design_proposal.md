# Collections Library Design Proposal

## Project Objective

The objective of this project is to design and implement a reusable collections library in C++. The library will provide generic implementations of DynamicArray, LinkedList, and HashMap using templates and dynamic memory management. The design focuses on efficiency, reusability, and safe memory ownership.

---

## Design Objectives

* Support multiple data types through templates
* Follow the Rule of Three for memory safety
* Provide efficient implementations of common operations
* Maintain a clean and consistent API
* Enable reuse in future projects

---

# 1. Public API

## DynamicArray<T>

| Return Type   | Method                                  |
| ------------- | --------------------------------------- |
| —             | DynamicArray()                          |
| —             | DynamicArray(const DynamicArray& other) |
| DynamicArray& | operator=(const DynamicArray& other)    |
| —             | ~DynamicArray()                         |
| void          | append(const T& value)                  |
| void          | insert(int index, const T& value)       |
| void          | remove(int index)                       |
| T             | get(int index) const                    |
| void          | set(int index, const T& value)          |
| int           | size() const                            |
| int           | capacity() const                        |
| bool          | isEmpty() const                         |
| void          | clear()                                 |

## LinkedList<T>

| Return Type | Method                              |
| ----------- | ----------------------------------- |
| —           | LinkedList()                        |
| —           | LinkedList(const LinkedList& other) |
| LinkedList& | operator=(const LinkedList& other)  |
| —           | ~LinkedList()                       |
| void        | pushFront(const T& value)           |
| void        | pushBack(const T& value)            |
| void        | insert(int index, const T& value)   |
| void        | removeFront()                       |
| void        | removeBack()                        |
| void        | remove(int index)                   |
| T           | get(int index) const                |
| bool        | contains(const T& value) const      |
| int         | size() const                        |
| bool        | isEmpty() const                     |
| void        | clear()                             |

## HashMap<K,V>

| Return Type | Method                            |
| ----------- | --------------------------------- |
| —           | HashMap()                         |
| —           | HashMap(const HashMap& other)     |
| HashMap&    | operator=(const HashMap& other)   |
| —           | ~HashMap()                        |
| void        | put(const K& key, const V& value) |
| V           | get(const K& key) const           |
| bool        | contains(const K& key) const      |
| void        | remove(const K& key)              |
| int         | size() const                      |
| bool        | isEmpty() const                   |
| void        | clear()                           |

---

# 2. Internal Representation

## DynamicArray

* Elements stored in contiguous heap memory
* Initial capacity: **8**
* Growth factor: **1.5**
* Resizes automatically when capacity is exhausted

## LinkedList

* Singly linked list implementation
* Each node stores data and a pointer to the next node
* Head and tail pointers maintained

## HashMap

* Bucket array with separate chaining
* Initial bucket count: **8**
* Load factor threshold: **0.75**
* Rehashing performed when the threshold is exceeded

---

# 3. Object Lifetime and Copy Semantics

All structures implement:

* Destructor
* Copy Constructor
* Assignment Operator

Deep copying is used throughout the library.

Advantages of deep copying:

* Independent memory ownership
* Prevents dangling pointers
* Prevents double-free errors
* Avoids accidental sharing of dynamic memory

---

# 4. Complexity Estimates

| Operation                               | Best | Average        | Worst |
| --------------------------------------- | ---- | -------------- | ----- |
| DynamicArray append()                   | O(1) | O(1) amortized | O(n)  |
| DynamicArray get()/set()                | O(1) | O(1)           | O(1)  |
| DynamicArray insert()/remove()          | O(1) | O(n)           | O(n)  |
| LinkedList pushFront()/pushBack()       | O(1) | O(1)           | O(1)  |
| LinkedList get()                        | O(1) | O(n)           | O(n)  |
| LinkedList insert()/remove()/contains() | O(1) | O(n)           | O(n)  |
| HashMap put()/get()/contains()/remove() | O(1) | O(1)           | O(n)  |

### Notes

* DynamicArray resizing may require copying all elements.
* LinkedList operations may require traversal.
* HashMap achieves O(1) average complexity when collisions are limited.

---

# 5. Design Decisions

## DynamicArray

* Initial capacity set to 8
* Growth factor set to 1.5
* Chosen to balance memory usage and performance

## LinkedList

* Singly linked structure selected
* Uses head and tail pointers
* Lower memory overhead than a doubly linked list

## HashMap

* Separate chaining selected for collision handling
* Load factor threshold set to 0.75
* Rehashing enabled

## Templates

* Reduce code duplication
* Improve reusability
* Provide compile-time type safety

## Memory Management

* Deep copying selected for safe ownership of dynamically allocated memory
* Ensures predictable object behavior
