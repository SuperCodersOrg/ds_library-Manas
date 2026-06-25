Session 7
Date: 24-06-2026
Time: 5:00 - 7:00 PM

Goal:
The goal of this session was to implement the basic HashMap operations. I worked on containsKey(), get(), put() .The main goal was to understand how key value pair work in hash map.

Problems Enountered:
While i was implementing put function, I found that I was not able to update the value of an existing key because LinkedList get function was returning a copy of the data.
While implementing put function, I was confused that how to access the bucket where the key should be stored.
When i was implementing containsKey and get function, I was confused how element would be searched because multiple entries can exist in the same bucket.
While writing put function, I found that I was not able to access and modify the bucket stored inside DynamicArray.

What i did:
I checked the LinkedList file and found that get function was returning T instead of T&. means it was returning the copy instead of actual object.
I studied about hashing and how the index is getting calculated using the hash function.
I researched about separate chaining and traversed the linked list present at the bucket index.I compared each key one by one until required was found.
I checked the dynamic array file,go through the functions and found that the get function in dynamic array was returning copy instead of actual object. I then modified that function.

Outcome:
Modified the get function and return a reference so that the actual data stored in the linked list can be modified directly.
Understood that the hash function returns the bucket index and all operations first calculate the index before searching or inserting data.
Successfully implemented searching in HashMap using linked list traversal.
The HashMap can now directly access the actual bucket stored inside DynamicArray.