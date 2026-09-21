# Algorithms and Data Structures — Laboratory Works

Repository for C programming laboratory assignments (Part 1: "C Programming Language").

**Variant Assigned:** **3**

---

## Branch Structure

Each laboratory assignment is maintained in its own dedicated Git branch:

| Branch | Corresponding Lab in Curriculum | Topic | Status |
| :--- | :--- | :--- | :--- |
| **`main`** | — | Project overview and general repository configuration | Base |
| [`lab1`](https://github.com/) | Laboratory Work №1 | Basic Variable Types & Elementary Input/Output | Prepared |
| [`lab2`](https://github.com/) | Laboratory Work №4 | One-Dimensional Arrays and Pointers | Prepared |
| [`lab3`](https://github.com/) | Laboratory Work №5 | Two-Dimensional and Dynamic Arrays | Prepared |

---

## Working with Branches

To switch to a specific laboratory work branch, use:

```bash
# Switch to Laboratory 1
git checkout lab1

# Switch to Laboratory 2 (Lab 4 in syllabus)
git checkout lab2

# Switch to Laboratory 3 (Lab 5 in syllabus)
git checkout lab3
```

Each branch contains a dedicated `README.md` with:
- Theoretical background and objectives
- Tasks specifically assigned for **Variant 3**
- Input/output specifications and mathematical expressions
- Control questions for assignment defense
- Starter source code templates in the `src/` directory

---

## Build and Run

You can compile individual C/C++ source files using `gcc`/`g++`, `clang`, or Microsoft Visual Studio C++:

```bash
# Using GCC (C)
gcc src/task1_1.c -o task1_1
./task1_1

# Using G++ (C++)
g++ src/task1_4.cpp -o task1_4
./task1_4
```