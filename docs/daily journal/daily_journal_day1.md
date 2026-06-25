## Daily Journal

Date: 23 June 2026

Objective of the Day

My objective of today was to start the implementation of the Collections Library project. My main focus was to create the DynamicArray, understand memory management using templates, implement basic DynamicArray operations and begin the implementation of LinkedList.

---

Tasks Completed
Project Planning and Setup

- Reviewed the design proposal.
- Created the repository folder structure.
- Created Dynamic_Array.h.
- Listed all required DynamicArray functions.
- Finalized the memory management strategy using malloc() and free().

DynamicArray Implementation

Implemented:

- Constructor
- Destructor
- size()
- capacity()
- isEmpty()
- append()
- get()
- set()
- insert()
- remove()
- resize()
- Copy Constructor

LinkedList Implementation

Implemented:

- Node structure
- Constructor
- Destructor
- pushFront()
- pushBack()
- get()
- contains()
- size()
- isEmpty()

---

Challenges Faced

Memory Allocation with Templates
I was confused about how malloc() would work with templates because the data type is only known when the template is instantiated.

Header File Issues
While compiling the project, the compiler could not locate the Dynamic_Array.h file.
Error:
fatal error: Dynamic_Array.h: No such file or directory

Growth Factor Implementation
I was confused about implementing a growth factor of 1.5 because it involves floating-point values.

Supporting Non-Primitive Data Types
The DynamicArray was working correctly for primitive data types but failed for strings and other objects.

Error:
error: no matching function for call to placement new

LinkedList Traversal
LinkedList does not support direct indexing like arrays. I had to understand how traversal works to implement get() and contains().

Template Syntax Errors
While implementing LinkedList, I encountered template-related errors.

Errors:
error: 'Node' was not declared in this scope
error: expected primary-expression before '>' token

---

Approach and Solutions

Solving Memory Allocation Problems
I researched how malloc() works with templates and discussed different approaches with teammates and sir.

Fixing Header File Issues
I corrected the include path for the header file.

Implementing Growth Factor
Instead of using multiplication, I used:
capacity + capacity / 2 which provided the required 1.5x growth behaviour.

Supporting Objects and Strings
I studied how objects are created in memory and learned that malloc() only allocates raw memory.
I included #include <new> and used Placement New to construct objects inside allocated memory.

LinkedList Traversal
I used a temp pointer starting from the head node and moved node by node until the required position was reached.

Resolving Template Errors
I corrected the declaration order and fixed the template syntax.

---

Key Learnings

Today I learned:
- How templates work with memory allocation.
- Difference between raw memory and constructed objects.
- Why Placement New is required for non-primitive data types.
- How DynamicArray resizing works internally.
- How Copy Constructors help create deep copies.
- How LinkedList traversal works.
- Importance of correct template syntax.
- How project structure affects compilation.

---

Final Outcome

By the end of the day:

- DynamicArray was successfully implemented.
- DynamicArray supports both primitive and non-primitive data types.
- Resizing logic was working correctly.
- Copy Constructor was implemented.
- Basic LinkedList functionality was completed.
- All major compilation issues were resolved.