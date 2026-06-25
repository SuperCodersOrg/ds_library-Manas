Session 6
Date: 24-06-2026
Time: 2:00 - 4:00 PM

Goal
The goal of this session was to create the basic structure of HashMap. I worked on the Entry structure, hash function, how it will work for the different data types specially for custom data types.Then implement HashMap class design structure.

Problem Encountered
error: 'string' is not a member of 'std'
error: explicit specialization of non-template class
the hash map was able to work only for strings.
The next problem was deciding how to support custom data types.

What I Did
I checked the required header files and found that the string header file was missing.
I studied template syntax and found mistakes in my implementation.
I analyzed the design and did research on different approaches for supporting multiple key types. I then replaced the string hash function with a DefaultHasher template.
I studied and understood how custom classes like Student, Employee etc can be hashed. I designed a DefaultHasher template.

Outcome
I added the required header file.
Corrected the template syntax and successfully created hash functions for int, char, and string data types.
The design became generic and can now support different key types.
It can now be extended for custom data types without changing the main implementation.
