# Algorithms and Data Structures — Laboratory Works

Repository for C programming laboratory assignments (Part 1: "C Programming Language").

**Variant Assigned:** **3** (corresponds to **Program 3, Task 3** in each laboratory)

---

## Branch Structure

Each laboratory assignment is organized in its own dedicated Git branch:

| Branch | Syllabus Source | Lab Title | Assigned Task (Variant 3) |
| :--- | :--- | :--- | :--- |
| **`main`** | — | Base branch | General overview and repository configuration |
| [`lab1`](https://github.com/) | Lab №1 | Basic Variable Types & Elementary I/O | **Program 1_3, Task 3**: Calculate $\text{res} = k^2 + (g - k) / 2.3$ for `double` inputs, with formatted output (`%8.3lf`). |
| [`lab2`](https://github.com/) | Lab №4 | Arrays and Pointers | **Program 4_3, Task 3**: 1D array of size 7 ($arr[0] = -2000$); find index of maximum negative element using pointer dereferencing `*(px + i)`. |
| [`lab3`](https://github.com/) | Lab №5 | Two-Dimensional and Dynamic Arrays | **Program 5_3, Task 3**: Array of 3 string pointers (University, Faculty, Specialty); count occurrences of letter `'e'` in the 3rd string. |

---

## Navigating Branches

Switch to any laboratory branch to view its complete guide and start coding:

```bash
# Switch to Laboratory 1 (Lab 1 from syllabus)
git checkout lab1

# Switch to Laboratory 2 (Lab 4 from syllabus)
git checkout lab2

# Switch to Laboratory 3 (Lab 5 from syllabus)
git checkout lab3
```

Each branch contains:
- Detailed `README.md` (in English) with theoretical objectives, formulas, test examples, and control questions.
- A starter source file `src/main.c` prepared for the implementation.

---

## Compilation & Run

Compile using any standard C compiler (GCC, Clang, MSVC):

```bash
gcc -std=c11 -Wall -Wextra src/main.c -o lab_task
./lab_task
```