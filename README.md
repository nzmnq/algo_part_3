# Laboratory Work №3: Multi-Dimensional and Dynamic Arrays (Lab №5 from Syllabus)

**Course:** Algorithms and Data Structures (Part 1: C Programming Language)  
**Assigned Program:** **Program 5_3 (Array of Pointers to Strings)**  
**Variant:** **3**

---

## 🎯 Objectives

- Master declaring, initializing, and using arrays of pointers to strings (`char *fi[]`).
- Understand memory footprint: size of the pointer array (`sizeof(fi)`) vs size of individual pointer elements (`sizeof(fi[i])`).
- Measure string lengths using `strlen()`.
- Implement character searching and counting within strings.

---

## 📖 Reference Program (Program 5_3)

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *fi[] = {"September", "October", "November"};

    printf("%s\n%s\n%s\n\n", fi[0], fi[1], fi[2]);

    printf("Size massiv pointer = %zu\n", sizeof(fi));
    printf("Size pointer 1 string = %zu\n", sizeof(fi[0]));
    printf("Size pointer 2 string = %zu\n", sizeof(fi[1]));
    printf("Size pointer 3 string = %zu\n", sizeof(fi[2]));

    puts("\nMassiv pointer string:");
    for (int i = 0; i < 3; i++) {
        printf("%s   %zu\n", fi[i], (size_t)strlen(fi[i]));
    }

    system("pause");
    return 0;
}
```

---

## 📋 Assigned Tasks for Program 5_3

Each variant requires defining an array of 3 pointers to strings, printing them to the screen, displaying the size of the array and individual pointers via `sizeof`, measuring string lengths via `strlen`, and performing the specified character count.

---

### ⭐ Variant 3 — Assigned Variant

> **Task:** Define an array of 3 pointers to strings with **University name, Faculty name, Specialty name**. In the third string (Specialty), count the number of occurrences of the letter **`'e'`**.

- **Implementation:** [src/task_3.c](file:///c:/Users/nazar/algo_part_3/src/task_3.c)

#### Example Strings:
1. `fi[0] = "National Technical University"`
2. `fi[1] = "Faculty of Applied Mathematics"`
3. `fi[2] = "Software Engineering"`

#### Example Output:
```text
National Technical University
Faculty of Applied Mathematics
Software Engineering

Size massiv pointer = 24
Size pointer 1 string = 8
Size pointer 2 string = 8
Size pointer 3 string = 8

Massiv pointer string:
National Technical University   29
Faculty of Applied Mathematics   30
Software Engineering   20

Кількість букв 'e' у третьому рядку: 4
```

---

### Other Variants for Program 5_3

<details>
<summary><b>Variant 1</b></summary>

- **Task:** Define an array of 3 pointers to strings with surname, first name, and patronymic. In the first string, count the number of occurrences of the letter `'o'`.
- **Implementation:** [src/task_1.c](file:///c:/Users/nazar/algo_part_3/src/task_1.c)
</details>

<details>
<summary><b>Variant 2</b></summary>

- **Task:** Define an array of 3 pointers to strings with country, city, and street name. In the third string, count the number of occurrences of the letter `'a'`.
- **Implementation:** [src/task_2.c](file:///c:/Users/nazar/algo_part_3/src/task_2.c)
</details>

<details>
<summary><b>Variant 4</b></summary>

- **Task:** Define an array of 3 pointers to strings with continent, country, and capital. In the third string, count the number of occurrences of the letter `'o'`.
- **Implementation:** [src/task_4.c](file:///c:/Users/nazar/algo_part_3/src/task_4.c)
</details>

<details>
<summary><b>Variant 5</b></summary>

- **Task:** Define an array of 3 pointers to strings with book title, chapter, and paragraph. In the second string, count the number of occurrences of the letter `'c'`.
- **Implementation:** [src/task_5.c](file:///c:/Users/nazar/algo_part_3/src/task_5.c)
</details>

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

## 📁 Repository File Structure

```text
.
├── README.md       # Laboratory guidelines and assignment description
└── src/
    ├── task_1.c    # Variant 1: Surname, name, patronymic; count 'o' in 1st string
    ├── task_2.c    # Variant 2: Country, city, street; count 'a' in 3rd string
    ├── task_3.c    # Variant 3: University, faculty, specialty; count 'e' in 3rd string
    ├── task_4.c    # Variant 4: Continent, country, capital; count 'o' in 3rd string
    └── task_5.c    # Variant 5: Book, chapter, paragraph; count 'c' in 2nd string
```

## 🔨 Compilation & Execution

```bash
# Compile Variant 3
gcc -std=c11 -Wall -Wextra src/task_3.c -o task3

# Run
./task3
```