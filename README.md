# Laboratory Work №2: Arrays and Pointers (Lab №4 from Syllabus)

**Course:** Algorithms and Data Structures (Part 1: C Programming Language)  
**Corresponding Lab in Syllabus:** **Laboratory Work №4 (Масиви і покажчики)**  
**Variant:** **3 (Program 4_3, Task 3)**

---

## 🎯 Objectives

- Understand declaration and initialization of one-dimensional arrays in C.
- Master pointer syntax, pointer initialization, and pointer arithmetic.
- Practice accessing array elements strictly through pointer dereferencing (`*(ptr + i)`).
- Implement algorithmic searching on arrays via pointers.

---

## 📋 Task Description (Variant 3)

> **Source:** Program 4_3, Task 3

Develop a C program that performs the following:

1. **Array Definition & Size:**
   - Define a 1-dimensional array of integers of size **7** (`int arr[7]`).
2. **Initialization & Input:**
   - Pre-define the first element to **-2000**:
     $$arr[0] = -2000$$
   - Read the remaining 6 elements (`arr[1]` through `arr[6]`) from the keyboard using `scanf()`.
3. **Pointer Access & Search:**
   - Declare a pointer `int *px = arr;` pointing to the beginning of the array.
   - Using **only pointer dereferencing** (i.e. `*(px + i)` instead of array indexing `arr[i]`), find the **index (position) of the maximum negative element** in the array (i.e., the negative number closest to zero, e.g. $-5 > -20$).
4. **Output:**
   - Print all elements of the array along with their indices.
   - Print the index (position) and the value of the maximum negative element found.

### Example Test Case

- **Array elements:** `arr = [-2000, 15, -42, 8, -7, 0, -13]`
  - Negative elements present: `-2000` (idx 0), `-42` (idx 2), `-7` (idx 4), `-13` (idx 6)
  - Maximum negative value: `-7` at index `4`
- **Output:**
  ```text
  Array:
  arr[0] = -2000
  arr[1] = 15
  arr[2] = -42
  arr[3] = 8
  arr[4] = -7
  arr[5] = 0
  arr[6] = -13

  Maximum negative element: arr[4] = -7 (index 4)
  ```

---

## ❓ Control Questions

1. What is an array? What do you understand by array initialization?
2. What are global, automatic, and static arrays? How are they implicitly initialized when no explicit values are provided?
3. In what ways can the size of an array be specified in C?
4. What is a pointer? What is the size of a pointer variable? What determines the type of a pointer? What does the difference between two pointers (`p1 - p2`) yield?
5. What is a pointer constant? What is the difference between an array identifier and a pointer variable? Which constructs in the following snippet are invalid and why?
   ```c
   int A[10], X[10], *PA, *PB;
   PA = &A[0];
   PB = A;
   X = PA;
   ```
6. In what ways can you access the last element of an array `int A[8]`?
7. Determine and explain the output of the following program:
   ```c
   #include <stdio.h>
   void main()
   {
       char a[5] = {50, 30, 20, 60, 80};
       char *p = a;
       printf("%d %d %d \n", *p, *(p+2), *p+2);
       printf("%d \n", *++p - 1);
       printf("%d %d\n", sizeof(a), sizeof(a[3]));
       printf("%d %d\n", sizeof(p), sizeof(*p));
   }
   ```

---

## 📁 Project Structure

```text
.
├── README.md       # Laboratory guidelines and assignment description
└── src/
    └── main.c      # Source code template for Task 4_3 (Variant 3)
```

## 🔨 Compilation & Execution

```bash
# Compile
gcc -std=c11 -Wall -Wextra src/main.c -o lab2

# Run
./lab2
```