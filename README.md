# cpp01 - 42 C++ Module 01

A comprehensive C++ learning module covering memory management, pointers, references, and object-oriented programming concepts.

## Overview

This project consists of 7 exercises (ex00 through ex06) that progressively introduce fundamental C++ concepts:
- Memory allocation and deallocation (new/delete)
- Pointers and references
- Class design and object orientation
- String manipulation
- File I/O operations
- Switch statements and control flow

## Exercise Breakdown

### ex00: Memory Management (Zombie class)
**Concepts:** new/delete, stack vs heap allocation, basic classes

Demonstrates creating objects on the heap and stack:
- `newZombie()` - Creates a Zombie on the heap (must be manually deleted)
- `randomChump()` - Creates a Zombie on the stack (auto-deleted at end of scope)

**Executable:** `./zombie`

**Output:** Shows creation and destruction of heap and stack zombies

---

### ex01: Array Allocation (Zombie Horde)
**Concepts:** new[], delete[], array allocation

Creates an array of Zombie objects dynamically:
- `zombieHorde(N, name)` - Allocates an array of N zombies
- Demonstrates proper array initialization and cleanup
- Uses delete[] to free array memory

**Executable:** `./zombie`

**Output:** Creates and announces 8 zombies, then destroys them all

---

### ex02: Pointers and References
**Concepts:** References vs pointers, memory addresses, reference semantics

Compares pointers and references with the same underlying memory:
- Shows that references and pointers point to the same address
- Demonstrates that dereferencing pointers and using references yield identical values
- Illustrates the key difference: references cannot be null, reassigned, or uninitialized

**Executable:** `./brain`

**Output:**
```
Memory address of the string variable: 0x7ffd938c7468
Memory address held by stringPTR:      0x7ffd938c7468
Memory address held by stringREF:      0x7ffd938c7468
```

---

### ex03: Pointers to Members and References
**Concepts:** Reference vs pointer members, dependency injection

Two ways to associate a Weapon with a Human:
- `HumanA` - Holds a Weapon reference (member must be initialized)
- `HumanB` - Holds a Weapon pointer (can be set later via setter)

Both can attack using their weapon. Shows the practical differences between references and pointers in class design.

**Executable:** `./violence`

**Output:** Demonstrates attacks by two humans with different weapon association methods

---

### ex04: String Replacement (File I/O)
**Concepts:** File I/O, string operations, command-line arguments

Replaces all occurrences of a string in a file:
- Reads from a file
- Replaces all instances of `s1` with `s2`
- Writes to a new file with `.replace` extension

**Usage:**
```bash
./zombie <filename> <s1> <s2>
```

**Example:**
```bash
./zombie test.txt "old" "new"
# Creates test.txt.replace with replacements
```

---

### ex05: Harl Complains (Switch & Member Functions)
**Concepts:** Switch statements, member function pointers, logging levels

A class that complains at different severity levels:
- DEBUG: Casual complaints
- INFO: Standard information
- WARNING: Warnings
- ERROR: Error messages
- UNKNOWN: Invalid levels

Uses a switch statement to call appropriate member functions.

**Executable:** `./Harl`

**Output:** Displays all complaint levels with formatted output

---

### ex06: Harl Filter (Switch Statement Trick)
**Concepts:** Switch statement fall-through, filtered output

Filters complaints starting from a specified level:
- Takes a log level as command-line argument
- Uses switch statement fall-through to display only messages from that level and above
- Ignores case for input level

**Usage:**
```bash
./harlFilter <level>
```

**Valid levels:** DEBUG, INFO, WARNING, ERROR

**Example:**
```bash
./harlFilter INFO
# Shows INFO, WARNING, and ERROR messages, skips DEBUG
```

---

## Compilation

Each exercise has its own Makefile. To compile:

```bash
cd ex00 && make
cd ex01 && make
# ... etc
```

Or compile all exercises:
```bash
for i in ex{00..06}; do (cd $i && make); done
```

## Testing

All exercises have been tested and verified to work correctly:

- ✅ ex00: Heap/stack zombie creation and destruction
- ✅ ex01: Array of 8 zombies creation and destruction
- ✅ ex02: Memory addresses and references verification
- ✅ ex03: Weapon attacks via different association methods
- ✅ ex04: File replacement (run with: `./zombie out.txt a b`)
- ✅ ex05: All complaint levels displayed correctly
- ✅ ex06: Filter shows messages from specified level onwards

## Key Concepts Covered

| Topic | Exercises |
|-------|-----------|
| new/delete | ex00, ex01 |
| Pointers | ex00, ex01, ex02, ex03 |
| References | ex02, ex03 |
| Classes & Objects | ex00-ex06 |
| Member functions | ex03-ex06 |
| File I/O | ex04 |
| String manipulation | ex04 |
| Switch statements | ex05, ex06 |
| Function pointers | ex05 |

## Build Artifacts

Object files (.o) and compiled executables are included in each exercise directory. To clean:

```bash
for i in ex{00..06}; do (cd $i && make clean); done
```

## Project Structure

```
cpp01/
├── ex00/    # Memory Management (new/delete)
├── ex01/    # Array Allocation (new[]/delete[])
├── ex02/    # References vs Pointers
├── ex03/    # Reference & Pointer Members
├── ex04/    # File I/O & String Replacement
├── ex05/    # Switch & Member Function Pointers
├── ex06/    # Switch Fall-through & Filtering
└── README.md
```

## Author

Created as part of the 42 School C++ module 01 curriculum.
