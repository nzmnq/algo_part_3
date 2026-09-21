# Laboratory Work №2: Arrays and Pointers (Lab №4 from Syllabus)

**Course:** Algorithms and Data Structures (Part 1: C Programming Language)  
**Corresponding Lab in Syllabus:** **Laboratory Work №4 (Масиви і покажчики)**  
**Variant:** **3**

---

## 🎯 Objectives

- Master declaring, defining, and initializing one-dimensional numeric and character/string arrays in C.
- Understand memory layout of arrays and pointer arithmetic.
- Use pointers and pointer dereferencing (`*ptr`, `*(ptr + i)`) to access and manipulate array elements.
- Implement sorting algorithms on arrays.
- Work with C-style strings (`char[]`) and basic string manipulation functions (`strlen`, `strcat`, `strcpy`, etc.).

---

## 📋 Tasks for Variant 3

### Task 2.1 (Program 4_1): Arithmetic Mean of Positive Elements
**Reference Program:** Declares and initializes an array of 10 integers, prints elements with addresses, and finds the minimum element.

**Assignment for Variant 3:**
1. Declare an integer array of size **5**.
2. Read all 5 elements from the keyboard.
3. Calculate the **arithmetic mean of only positive elements** ($x > 0$).
4. Display all array elements and the computed mean on the screen. Handle the edge case where no positive elements exist.

---

### Task 2.2 (Program 4_2): Random Array Generation & Counting Even Numbers
**Reference Program:** Populates an array with pseudo-random numbers via `rand()`, finds min/max indices, and counts positive elements between them.

**Assignment for Variant 3:**
1. Declare an integer array of size **16**.
2. Populate the array with pseudo-random numbers in the range from **-20 to 20** using `srand(time(NULL))` and `rand()`.
3. Count the total number of **even numbers** in the array.
4. Display the generated array and the calculated count of even numbers.

---

### Task 2.3 (Program 4_3): Pointer Dereferencing & Max Negative Element
**Reference Program:** Finds the maximum element in an array using pointer dereferencing (`*(px + i)`).

**Assignment for Variant 3:**
1. Declare an integer array of size **7**.
2. Initialize the first element to **-2000** (`arr[0] = -2000`).
3. Read the remaining 6 elements from the keyboard.
4. Using pointer dereferencing (`*(px + i)`) and pointer arithmetic, find the **index (position) of the maximum negative element** ($x < 0$ with the largest value).
5. Output the array elements, their addresses, and the index and value of the maximum negative element.

---

### Task 2.4 (Program 4_4): Sorting Real Numbers via Selection Sort (Minimum Element)
**Reference Program:** Sorts an integer array using selection sort (finding maximum).

**Assignment for Variant 3:**
1. Declare an array of real numbers (`float` or `double`).
2. Populate the array with random numbers in the range from **-50.5 to 50.5**.
3. Sort this array in **descending order** using the **selection sort method by finding the minimum element**.
4. Output the array before and after sorting.

---

### Task 2.5 (Program 4_5): String Operations & Concatenation
**Reference Program:** Demonstrates string reading via `gets()` (or safe `fgets()`) and `scanf("%s", ...)`, and string printing.

**Assignment for Variant 3:**
1. Read a string containing a **movie title and director's surname** from the keyboard (with multiple words allowed).
2. Calculate and display the character length of this string using `strlen()`.
3. Define a second string with a notification message: that **a disk with such a movie is now on sale** (e.g. `", directed by ... - DVD/Blu-ray is now on sale!"`).
4. Calculate and display the character length of the notification string.
5. Concatenate the notification message to the first string.
6. Display the full combined string and its total length.

---

## ❓ Control Questions

1. What is an array? What do you understand by array initialization?
2. What are global, automatic, and static arrays? How are they implicitly initialized when no initializers are provided?
3. In what ways can the size of an array be specified in C?
4. What is a pointer? What is the size of a pointer variable in 32-bit and 64-bit systems? What does the pointer type define? What does the difference between two pointers (`p1 - p2`) represent?
5. What is a pointer constant? What is the fundamental difference between an array identifier (name) and a pointer variable? Which constructs in the following snippet are invalid and why?
   ```c
   int A[10], X[10], *PA, *PB;
   PA = &A[0];
   PB = A;
   X = PA;
   ```
6. In what ways can you access the last element of the array `int A[8]`?
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

## 📁 Repository File Structure

```text
.
├── README.md           # This assignment guide
└── src/
    ├── task2_1.c       # Arithmetic mean of positive elements (size 5)
    ├── task2_2.cpp     # Random array [-20, 20], count even numbers (size 16)
    ├── task2_3.c       # Pointer dereferencing for max negative element (size 7)
    ├── task2_4.c       # Selection sort (min element) descending for floats
    └── task2_5.c       # String length, concatenation (movie & director)
```