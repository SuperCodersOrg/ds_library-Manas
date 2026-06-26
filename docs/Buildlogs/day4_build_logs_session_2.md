Build Log – Day 3

Session 2
Date: 26-06-2026
Time: 3:00 - 4:30 PM

Goal:
the main goal was to understand Redis Lite requirements and prepare the project structure before starting implementation.

Problems Encountered:
Had no prior understanding of Redis and Redis Lite.
Needed to understand how Redis Lite would use the existing HashMap implementation.
Unclear about command behavior such as SET, GET, DEL, EXISTS, COUNT and CLEAR.
Needed to understand the role of RedisCLI and how command processing would work.

What I Did:
Researched Redis and Redis Lite concepts.
Studied the required Redis Lite commands and their expected behavior.
Analyzed how each command maps to existing HashMap functions.
Explored the RedisCLI structure and its responsibilities.
Discussed edge cases such as duplicate keys, missing keys, invalid commands and command parsing.
Planned the overall flow from user input → RedisCLI → HashMap.

Outcome:
Gained a clear understanding of Redis Lite architecture.
Finalized the command workflow and RedisCLI responsibilities.
Prepared the project for RedisCLI implementation.
