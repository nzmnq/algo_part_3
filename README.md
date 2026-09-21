# Laboratory Work №1: Basic Variable Types & Elementary Input/Output

**Course:** Algorithms and Data Structures (Part 1: C Programming Language)  
**Variant:** **3**

---

## 🎯 Objectives

- Familiarize with the fundamental data types in C (`char`, `short`, `int`, `long`, `float`, `double`, `unsigned`/`signed`).
- Master basic input/output functions in C (`printf`, `scanf`, `puts`, `getchar`) and C++ streams (`cin`, `cout`).
- Understand data sizes (`sizeof`), ranges, format specifiers, and integer overflow/boundary transitions.
- Practice arithmetic, logical, relational, and conditional ternary operators.

---

## 📋 Tasks for Variant 3

### Task 1.1 (Program 1_1): Character Encoding & Data Type Sizes
**Reference Program:** Displays the ASCII code of a character in decimal, octal, and hexadecimal formats, and reports byte sizes of types.

**Assignment for Variant 3:**
1. Print your **last name (surname)** on the screen.
2. Replace the character `'a'` with the **first letter of your first name** and display its codes in decimal, octal, and hexadecimal number systems.
3. Declare new variables of types `short`, `long`, and `double` with arbitrary initial values.
4. Output their values and their memory sizes in bytes using the `sizeof()` operator.

---

### Task 1.2 (Program 1_2): Arithmetic & Logical Expressions
**Reference Program:** Evaluates compound assignments, relational checks, increment/decrement operators, and ternary conditional operators.

**Assignment for Variant 3:**
Develop a program that evaluates the following expressions. Explain every intermediate and final result in comments:

```c
a1 = 6;
a2 = 20;
a2 /= 5;
b1 = 5 * a1 + a2 * a2;             // Note: a2^2
b2 = a1 > a2;
b3 = --b2;
f1 = 1.5f;
f2 = 3.5f;
r1 = f1 + 4 * f2;
r2 = (f1 >= f2) ? f1 - 2.5f : f2 + 5.2f;
```

---

### Task 1.3 (Program 1_3): Formatted Input & Output (`scanf` / `printf`)
**Reference Program:** Calculates the volume of a cylinder using `scanf` and `printf`.

**Assignment for Variant 3:**
1. Read variables `k` and `g` of type `double` from the keyboard via `scanf()`.
2. Compute the value of:
   $$\text{res} = k^2 + \frac{g - k}{2.3}$$
3. Print the result to the screen with **4 digits for the integer part** and **3 digits for the fractional part** (using formatting specifiers such as `%8.3lf`).

---

### Task 1.4 (Program 1_4): Stream I/O in C++ (`cin` / `cout`)
**Reference Program:** Converts inches to centimeters using `cin >>` and `cout <<`.

**Assignment for Variant 3:**
1. Prompt the user and input radius `r` from the keyboard using `cin >>`.
2. Calculate the circumference of a circle:
   $$L = 2 \pi r \quad (\pi \approx 3.14159265)$$
3. Output the entered variable and the computed result using `cout <<`.

---

### Task 1.5 (Program 1_5): Type Limits and Overflow Transitions
**Reference Program:** Demonstrates transitions across integer boundary limits (maximum and minimum values) causing overflow.

**Assignment for Variant 3:**
1. Declare and initialize the following variables:
   ```c
   short x1 = 30;
   unsigned short y1 = 35000;
   char z1 = -25;
   unsigned char v1 = 20;
   ```
2. For each variable, determine and add the exact number required to bring the value to its **maximum positive limit** ($x_2, y_2, z_2, v_2$).
3. Add a number to make each variable **exceed its maximum by 1** ($x_3, y_3, z_3, v_3$).
4. Print all values to the screen and explain the resulting overflow wrap-around behavior.

---

### Task 1.6 (Program 1_6): String Formatting with Preprocessor Directives
**Reference Program:** Formats string output with field widths and precision using `#define` constants.

**Assignment for Variant 3:**
1. Using the `#define` directive, create a macro `STR4` containing two words: **Subject name and lecturer's surname** (e.g. `"Algorithms ProfSmith"`).
2. Output the strings according to the following layout:
   - Print both words completely, enclosed within vertical delimiters `|` at the beginning and end of the display width.
   - On a new line, print only the first word aligned to the **left** (start of the line, enclosed in `|`).
   - On the next line, print only the first word aligned to the **right** (end of the line, enclosed in `|`).

---

## ❓ Control Questions

1. What basic data types are available in C/C++? How many bytes does each type occupy in memory?
2. What is the syntax and argument structure of the `printf()` function?
3. What is the syntax and argument structure of the `scanf()` function? Why are addresses (`&`) passed for non-pointer variables?
4. Declare and initialize an integer, a real number, a character, and a string. Show how to read and print each of them using different methods and explain the differences.
5. Identify the syntax and runtime errors in the following code snippet and write the corrected version:
   ```c
   #include studio.h void main;
   {int i i:=52
   print('In year i weeks') }
   ```

---

## 📁 Repository File Structure

```text
.
├── README.md           # This assignment guide
└── src/
    ├── task1_1.c       # Character codes and sizeof
    ├── task1_2.c       # Arithmetic & logical expressions
    ├── task1_3.c       # Formatted double expression calculation
    ├── task1_4.cpp     # Circle circumference via cin/cout
    ├── task1_5.c       # Type limits and integer overflow
    └── task1_6.c       # Formatted string output with #define
```