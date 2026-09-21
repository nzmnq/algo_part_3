# Laboratory Work №1: Basic Variable Types & Elementary Input/Output

**Course:** Algorithms and Data Structures (Part 1: C Programming Language)  
**Variant:** **3 (Program 1_3, Task 3)**

---

## 🎯 Objective

- Learn fundamental data types in C (`double`, `float`, `int`).
- Master formatted console input and output using `scanf()` and `printf()`.
- Practice implementing mathematical expressions with formatted numerical output.

---

## 📋 Task Description (Variant 3)

> **Source:** Program 1_3, Task 3

Write a C program that performs the following:

1. **Input:**
   - Prompt the user to enter two floating-point numbers of type `double`: `k` and `g` via `scanf()`.
2. **Computation:**
   - Calculate the value of `res` according to the formula:
     $$\text{res} = k^2 + \frac{g - k}{2.3}$$
3. **Formatted Output:**
   - Print the calculated result `res` to the console using `printf()` with:
     - **4 digits** for the integer part
     - **3 digits** for the fractional part
     - Use a field width specifier like `%8.3lf` (or `%8.3f`), where the first number defines the total width (integer digits + decimal point + fractional digits) and the second defines precision.

### Mathematical Formula

$$\text{res} = k^2 + \frac{g - k}{2.3}$$

### Example Test Case

- **Input:** `k = 5.0`, `g = 9.6`
- **Calculation:**
  - $k^2 = 25.0$
  - $(g - k) / 2.3 = (9.6 - 5.0) / 2.3 = 4.6 / 2.3 = 2.0$
  - $\text{res} = 25.0 + 2.0 = 27.0$
- **Expected Output:**
  ```text
  k = 5.000, g = 9.600
  res =   27.000
  ```

---

## ❓ Control Questions

1. What basic data types are available in C/C++? How many bytes does each data type occupy in memory?
2. What is the general composition of arguments for the `printf()` function?
3. What is the general composition of arguments for the `scanf()` function? Why is the address-of operator (`&`) required for scalar variables?
4. Declare and initialize an integer, a real number, a character, and a string. Demonstrate reading and printing them using different methods and explain the differences.
5. Identify errors in the following code snippet and write the corrected version:
   ```c
   #include studio.h void main;
   {int i i:=52
   print('In year i weeks') }
   ```

---

## 📁 Project Structure

```text
.
├── README.md       # Laboratory guidelines and assignment description
└── src/
    └── main.c      # Source code template for Task 1_3 (Variant 3)
```

## 🔨 Compilation & Execution

```bash
# Compile
gcc -std=c11 -Wall -Wextra src/main.c -o lab1

# Run
./lab1
```