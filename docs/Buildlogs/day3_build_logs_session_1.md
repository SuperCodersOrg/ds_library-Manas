Session 8
Date: 25-06-2026
Time: 6:30-8:30 AM

Goal:
The goal of this session was to complete the remaining HashMap functions. I worked on remove(), clear(), destructor, copy constructor, assignment operator.Then i encountered the problem of resizing when the lod factor becomes greater than 0.75.

Problems Encountered:
When i was writing put function, I ecountered with a problem that the number of buckets remained fixed even when more elements were inserted.This was leading to a large number of collisions and performnce was decreasing.
While implementing rehashing, I was a bit confused whether i use old bucket positions or rehash them.
While implementing rehash(), the size of the HashMap became incorrect after reinserting elements.
Encountered a error
error: Key not found

What I did:
I studied about the concept of load factor and rehashing in HashMap. I determined that when the load factor reaches the set value, the no of buckets should be increased and all elements present in old buckets should be rehashed to new bucket.
I searched the bucket before removing and added exception handling if the key was not found.

Outcome:
Implemented resizing and rehashing for the HashMap.
I reinserted all existing entries into the new buckets after resizing.
Remove function now properly handle invalid key.