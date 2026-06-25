Session 4
Date: 23-06-2026
Time: 3.40PM - 5.30 PM

Goal: 
the goal is to make dynamic array work for strings and the other data types also.now it i working for primitive data types and generate the copy constructor.

problems: 
error: no matching function for call to placement new
for primitive data types dynamic array was working perfectly but was not working for non-primitive.
And malloc allocates raw memory and does not call constructors but for strings call of constructor and destructor is required.
And how to implement resizing on it.

what i did:
i checked and found we have to include a header file for new.
and for non-primitive data types i studied how strings are stored and how the objects are created and memory is allocaed. Found placement new can be used to create objects into allocated memory.
i created a new memory block and then copied the elements into new one , destroyed the old and then freed old memory.

outcome:
Code compiled successfully for new.
Modifyt he functions so that it can handle non-primitive data types also.
the dynamic array can be now resized safely.