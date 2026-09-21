# Laboratory Work №3: Multi-Dimensional and Dynamic Arrays (Lab №5 from Syllabus)

**Course:** Algorithms and Data Structures (Part 1: C Programming Language)  
**Corresponding Lab in Syllabus:** **Laboratory Work №5 (Двовимірні та динамічні масиви)**  
**Variant:** **3 (Program 5_3, Task 3)**

---

## 🎯 Objectives

- Master declaring and manipulating arrays of pointers (`char *arr[]`).
- Understand memory allocation and structure of pointer arrays vs. 2D character arrays.
- Practice string inspection, calculating string lengths (`strlen`), pointer memory sizes (`sizeof`), and character searching algorithms.

---

## 📋 Task Description (Variant 3)

> **Source:** Program 5_3, Task 3

Develop a C program that performs the following:

1. **Array of Pointers Definition:**
   - Define an array of **3 pointers** to strings (`char *arr[3]` or `const char *arr[3]`).
   - The three strings must represent:
     1. **University Name** (e.g., `"National Technical University of Ukraine"`)
     2. **Faculty Name** (e.g., `"Faculty of Applied Mathematics"`)
     3. **Specialty Name** (e.g., `"Software Engineering and Computer Systems"`)
2. **Display & Size Analysis:**
   - Print all three strings to the console.
   - Display the memory size of the pointer array itself (`sizeof(arr)`).
   - Display the memory size occupied by each individual pointer (`sizeof(arr[i])`).
   - Display the character length of each string using `strlen()`.
3. **Character Counting:**
   - In the **third string** (Specialty Name), count the number of occurrences of the letter **`'e'`** (case-insensitive search for both `'e'` and `'E'`, or lowercase `'e'`).
   - Print the counted number of occurrences to the console.

### Example Test Case

- **Defined Strings:**
  - `arr[0] = "National Technical University"`
  - `arr[1] = "Faculty of Informatics"`
  - `arr[2] = "Software Engineering"`
- **Analysis:**
  - In `arr[2]` ("Software Engineering"), the letter `'e'` occurs:
    - S-o-f-t-w-a-r-**e** (1)
    - **E**-n-g-i-n-**e**-**e**-r-i-n-g (3)
    - Total: 4 occurrences (case-insensitive) or 3 (lowercase `'e'`).
- **Expected Output:**
  ```text
  University: National Technical University
  Faculty:    Faculty of Informatics
  Specialty:  Software Engineering

  Size of pointer array: 24 bytes (on 64-bit system)
  Size of single pointer: 8 bytes
  Length of Specialty string: 20 characters

  Occurrences of letter 'e' in specialty: 4
  ```

---

## ❓ Control Questions

1. What is a multi-dimensional array? How are elements of multi-dimensional arrays laid out in physical computer memory (row-major order)?
2. Provide examples of complete and partial explicit initialization of a two-dimensional array of size $2 \times 3$ with integer elements (`int`).
3. Determine and explain the output of the following program:
   ```c
   #include <stdio.h>
   void main()
   {
       char m[2][3] = {{1, 5, 7}, {2, 6, 8}};
       char *pm = m[0];
       printf("%d %d %d %d\n", **(m+1), *(*(m+1)+1), *pm+2, *(pm+2));
       printf("%d %d\n", sizeof(m), sizeof(m[0]));
       printf("%d %d\n", sizeof(m[0][0]), sizeof(pm));
   }
   ```
4. What is an array of pointers? Give an example demonstrating explicit complete initialization of such an array.
5. What is a dynamic array? In what fundamental ways does it differ from a fixed-size (static or automatic) array?
6. Write a C++ code snippet to dynamically allocate a 10-element array of type `double` using the `new` operator, verify that the allocation was successful, fill it with pseudo-random numbers, and properly release the memory using `delete[]`.
7. Write a C code snippet to dynamically allocate a 20-element array of type `long` using `malloc()`, check for allocation success, populate it from user input, and release the memory using `free()`.
8. Write a C++ code snippet to dynamically allocate a $4 \times 5$ matrix of `float` elements using `new`, assign random numbers from -50.00 to +50.00, and free the allocated memory.

---

## 📁 Project Structure

```text
.
├── README.md       # Laboratory guidelines and assignment description
└── src/
    └── main.c      # Source code template for Task 5_3 (Variant 3)
```

## 🔨 Compilation & Execution

```bash
# Compile
gcc -std=c11 -Wall -Wextra src/main.c -o lab3

# Run
./lab3
```