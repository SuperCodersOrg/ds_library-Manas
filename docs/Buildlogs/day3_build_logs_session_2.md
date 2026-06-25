Build Log
Date: 25-06-2026
Duration: 2hrs
Goal

The goal of this session was to reorganize the project structure.We have to separate declarations and implementations. I moved class declarations to the include folder and implementations to .tpp files inside the src folder.

---

Problems Encountered

After moving the implementation code to .tpp files, the project was not compiling successfully.
Errors related to:

- Missing function definitions.
- Include path issues.
- DynamicArray get() function mismatch after changing return type.
- Problems accessing template implementations after moving them to separate files.

---

What I Tried

- Created separate include and src folders for each data structure.
- Moved DynamicArray implementations from the header file to Dynamic_array.tpp.
- Added the .tpp include at the end of the header file.
- Checked include paths between header and implementation files.
- Updated the function declarations to match the definitions.
- Reviewed CMake configuration and include directories.

---

Outcome
- DynamicArray declarations and implementations were successfully separated.
- The project structure became cleaner and easier to maintain.
- Header files now contain declarations only.
- Implementation code is stored in .tpp files.

---