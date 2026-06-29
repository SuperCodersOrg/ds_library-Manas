Session 1
Date: 27-06-2026
Duration: 2 Hours

Goal:
Complete the Redis Lite implementation by adding the remaining commands and making the CLI interactive.

Problems Encountered:
Faced linker errors because redis_cli.cpp was not linked with main.cpp.
Incorrect include path in redis_cli.cpp.
run() implementation was not being linked due to the build configuration.

What I Did:
Implemented handleDel(), handleClear() and run().
Added command parsing for SET, GET, DEL, EXISTS, COUNT, CLEAR and EXIT.
Fixed the include path for redis_cli.h.
Updated the CMake configuration to include redis_cli.cpp in the build target.

Outcome:
Successfully completed the Redis Lite CLI.
All required commands are working correctly.
The application now accepts commands continuously until EXIT is entered.
Verified integration between RedisCLI and the custom HashMap.