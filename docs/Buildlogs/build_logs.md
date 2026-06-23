# Build Logs

Session 1
Date: 23-06-2026
Time: 9:30 - 10.30 AM

Goal: 
Goal is to set up the project structure and review the design proposal before starting implementation and created the dynamic_array.h file.

Problems:
Need to understand how malloc/calloc will be used in templates.

What I tried:
I did research about use of malloc and calloc and also discussed the approach with my teammates and tried to find ways how can we implement templates with malloc/calloc.

Outcome:
Created repository folder structure.
Reviewed design proposal.
Listed the function required for dynamic array.
Updated memory management plan to use malloc, realloc and free.
Created initial DynamicArray class.


Session 2
Date: 23-06-2026
Time: 10:45 - 1:00 PM

Goal: 
Goal is to implement the constructor, destructor and some basic operations such as size,capacity and isEmpty functions.These functions are easy and can help in checking the constructor working.

Problems:
Handling the error when there is no free memory in the heap.
fatal error: Dynamic_Array.h: No such file or directory
 #include "Dynamic_Array.h".

what i tried:
I made some research on these as there is also a standard library for these exceptions and discussed with sir also. 
i checked the project folder structure and then understood about the location of header file.
then i updated the include file.

Outcome:
decided to use the library for exceptions.
The header fine was included succesfully.

Session 3
Date: 23-06-2026
Time: 2:00 PM - 3.30 PM

Goal: 
Goal is to implement the element insertion(append) with managing the resizing when the size becomes greater and then impleenting the get set insert remove function.

Problems:
I was confused how to implement the growth factor as 1.5 is a float value and if multiplied type casting would be required.
error: 'out_of_range' is not a member of 'std'


what i tried:
i tried different approaches and check can i implement it using any other operations. i checked the header file and it was not included properly.


Outcome:
I implemented the growth facor using arithmetic and divide operation. I used capacity + capacity/2 as it prevents the float as dive operation automatically gives us the value. the ode wrked successfully.
