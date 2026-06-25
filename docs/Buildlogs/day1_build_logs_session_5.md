Session 5
Date: 23-06-2026
Time: 8.30 - 10.15 PM

Goal: 
goal is to first create the structure of the node.
the design the basic structure and implement the basic functionalities of the linked list like the constructor, destructor,push front, pushback, get,contains,size,is_empty.

Problem Encountered:
The problem i encountered was to implement the get function as like dynamic array there is no direct indexing.
The other problem is faced is to search the element in the linked list.
When i compiled the linked-list file
error: 'Node' was not declared in this scope
error: expected primary-expression before '>' token

What i did:
I studied how node traversal works and used a temporary pointer starting from the head node. The pointer moves node by node until the required index is reached.
I traversed the list from head to tail and compared each node's data with the target value.
I then reviewed the order of declarations in the header file and found that the LinkedList class was being processed before the Node structure definition.
I checked all declarations using Node<T>. I then found a syntax mistake while declaring a node pointer.

Outcome:
Successfully implemented get() and understood how element access works in a linked structure.
Successfully implemented contains() which returns true if the element exists and false otherwise.
Moved the Node structure before the LinkedList class declaration.
Corrected the template syntax and the code run successfully.
