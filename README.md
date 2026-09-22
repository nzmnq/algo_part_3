# Laboratory Work №2: Arrays and Pointers (Lab №4 from Syllabus)

**Course:** Algorithms and Data Structures (Part 1: C Programming Language)  
**Assigned Program:** **Program 4_3 (Pointer Dereferencing with 1D Arrays)**  
**Variant:** **3 (Task 3)**

---

## 🎯 Objectives

- Understand declaration and initialization of one-dimensional arrays in C.
- Master pointer syntax, pointer initialization, and pointer arithmetic.
- Practice accessing array elements strictly through pointer dereferencing (`*(ptr + i)`).
- Implement algorithmic searching on arrays via pointers.

---

## 📖 Reference Program (Program 4_3)

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[10] = {5, 3, 2, -4, 6, 7, 110, -17, 0, 13}, max, i = 0;
    int *px = arr; // визначення покажчика типу int на масив
    max = *px;     // привласнення max значення нульового елемента масиву
    while (i < 10) {
        if (*(px + i) > max) max = *(px + i);
        i++;
    }
    printf("max=%d\n", max);
    system("pause");
    return 0;
}
```

---

## 📋 Assigned Tasks for Program 4_3

For each task:
- The first element of the array is pre-defined in the program.
- All remaining elements are entered from the keyboard.
- All element access during calculations must be performed using **pointer dereferencing** (`*(px + i)`).
- Output the array elements and calculation results.

---

### ⭐ Variant 3 (Task 3) — Assigned Variant

> **Task:** Find the index (number) of the **maximum negative element** in the array.  
> **First element:** `-2000`  
> **Array size:** `7`

```c
int arr[7] = {-2000};
```

1. Read the remaining 6 elements from the keyboard via pointer `px + i`.
2. Print all elements of the array.
3. Using pointer dereferencing, find the index of the maximum negative element ($x < 0$ closest to zero).
4. Output the index and value found.

#### Example Test Case:
- **Input (6 numbers):** `-100`, `-50`, `20`, `-5`, `10`, `-30`
- **Full Array:** `[-2000, -100, -50, 20, -5, 10, -30]`
- **Negative Elements:** `-2000` (idx 0), `-100` (idx 1), `-50` (idx 2), `-5` (idx 4), `-30` (idx 6)
- **Result:** Maximum negative element is `arr[4] = -5` (index 4).

---

### Other Tasks for Program 4_3

<details>
<summary><b>Task 1</b></summary>

- **Task:** Find the minimum element of the array that is a multiple of 5.
- **First element:** `500`
- **Array size:** `8`
- **Implementation:** [src/task_1.c](file:///c:/Users/nazar/algo_part_3/src/task_1.c)
</details>

<details>
<summary><b>Task 2</b></summary>

- **Task:** Find the index (number) of the minimum positive element of the array.
- **First element:** `1000`
- **Array size:** `6`
- **Implementation:** [src/task_2.c](file:///c:/Users/nazar/algo_part_3/src/task_2.c)
</details>

<details>
<summary><b>Task 4</b></summary>

- **Task:** Find the maximum even element of the array.
- **First element:** `-100`
- **Array size:** `8`
- **Implementation:** [src/task_4.c](file:///c:/Users/nazar/algo_part_3/src/task_4.c)
</details>

<details>
<summary><b>Task 5</b></summary>

- **Task:** Find the minimum odd element of the array.
- **First element:** `201`
- **Array size:** `7`
- **Implementation:** [src/task_5.c](file:///c:/Users/nazar/algo_part_3/src/task_5.c)
</details>

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

## 📁 Repository File Structure

```text
.
├── README.md       # Laboratory guidelines and assignment description
└── src/
    ├── task_1.c    # Task 1: Min element multiple of 5 (size 8, arr[0]=500)
    ├── task_2.c    # Task 2: Index of min positive element (size 6, arr[0]=1000)
    ├── task_3.c    # Task 3: Index of max negative element (size 7, arr[0]=-2000) [Variant 3]
    ├── task_4.c    # Task 4: Max even element (size 8, arr[0]=-100)
    └── task_5.c    # Task 5: Min odd element (size 7, arr[0]=201)
```

## 🔨 Compilation & Execution

```bash
# Compile Variant 3 (Task 3)
gcc -std=c11 -Wall -Wextra src/task_3.c -o task3

# Run
./task3
```