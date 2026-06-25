Daily Development Journal

Date: 24 June 2026

Objective of the Day

The objective of today was to complete the remaining LinkedList operations and start the implementation of HashMap. The focus was on understanding node manipulation in LinkedList, designing a generic hashing system, and implementing the basic HashMap operations such as insertion, searching and updating values.

---

Tasks Completed

LinkedList Implementation
Implemented:
- insert()
- removeFront()
- removeBack()
- remove()
- clear()
- Copy Constructor
- Assignment Operator

HashMap Design
Implemented:
- Entry<K,V> structure
- DefaultHasher template
- Hash functions for int
- Hash functions for char
- Hash functions for string
- HashMap class structure

HashMap Operations
Implemented:
- COnstructor()
- containsKey()
- get()
- put()

---

Challenges Faced

Removing the Last Node
While implementing removeBack function, I was unable to directly access the node before the tail because LinkedList only stores the tail pointer and not the previous node.

Insertion in Between Nodes
While implementing insert function, I was confused about where the new node should be connected and how the next pointers should be updated.

Function Declaration Issues
I encountered:
error: 'removeFront' was not declared in this scope

HashMap Limited to String Keys
Initially the HashMap design was working only for string keys and could not support other data types.

Missing String Header
I encountered:
error: 'string' is not a member of 'std'

Template Specialization Errors
I encountered:
error: explicit specialization of non-template class

Updating Existing Values in HashMap
While implementing put function, I found that existing values could not be updated because LinkedList::get() was returning a copy instead of the actual stored object.

Accessing Buckets Stored Inside DynamicArray
I was also unable to directly modify the bucket stored inside DynamicArray because DynamicArray::get() was returning a copy.

---

Approach and Solutions

- LinkedList Operations
To implement removeBack function, I traversed the list until reaching the node just before the tail. After finding it, I updated the tail pointer and removed the last node.
For insert function, I traversed to the node before the required position and correctly connected the new node by updating the next pointers.

- Function Declaration Fixes
I reviewed all declarations and definitions and found mismatched function names. After correcting them, the code compiled successfully.

- Understanding Bucket Access
I studied how hash functions calculate bucket indices and how separate chaining works using LinkedList buckets.
I learned that all operations first calculate the bucket index and then traverse the linked list stored inside that bucket.

- Returning References Instead of Copies
I found that both LinkedList::get() and DynamicArray::get() were returning copies.
I modified them to return references This allowed direct modification of stored entries and buckets.

---

Key Learnings

Today I learned:
- How insertion and deletion work in LinkedList.
- How tail pointer management is handled.
- Difference between returning a copy and returning a reference.
- How hash functions calculate bucket indices.
- How separate chaining handles collisions.
- How hashing can be implemented using templates.
- How HashMap stores buckets using DynamicArray and LinkedList together.
- How key-value pairs are searched and updated inside a bucket.

---

Final Outcome

By the end of the day:
- LinkedList implementation was completed.
- Copy Constructor and Assignment Operator were implemented.
- HashMap structure was created.
- Hash functions for int, char and string were added.
- containsKey(), get() and put() were implemented.
- DynamicArray and LinkedList were modified to return references where required.
- HashMap can now insert, search and update key-value pairs successfully.
