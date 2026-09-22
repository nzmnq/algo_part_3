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

> **Source:** Program 1_3, Tasks 1-5

Write C programs that perform the following tasks. For each task, read the specified variables from the keyboard using `scanf()`, calculate `res`, and print the result using `printf()` with the required number of integer and fractional digits.

1. Enter variables `x` and `z` of type `float`. Calculate:
  $$\text{res} = \frac{(4.2x - z)^2}{3.5}$$
  Print the result with **3 integer digits** and **2 fractional digits** using `%6.2f`.

2. Enter variables `a`, `b`, and `c` of type `double`. Calculate:
  $$\text{res} = a + 2.8b - c^2$$
  Print the result with **2 integer digits** and **3 fractional digits** using `%6.3lf`.

3. Enter variables `k` and `g` of type `double`. Calculate:
  $$\text{res} = k^2 + \frac{g-k}{2.3}$$
  Print the result with **4 integer digits** and **3 fractional digits** using `%8.3lf`.

4. Enter variables `v`, `s`, and `f` of type `float`. Calculate:
  $$\text{res} = \frac{s^3}{v} - fv$$
  Print the result with **2 integer digits** and **4 fractional digits** using `%7.4f`.

5. Enter variables `x`, `z`, and `h` of type `double`. Calculate:
  $$\text{res} = x^3 + \frac{z}{h^2}$$
  Print the result with **3 integer digits** and **3 fractional digits** using `%7.3lf`.

In each format specifier, the first number defines the total field width, while the second number defines the number of digits after the decimal point.

### Example Test Case for Task 3

- **Input:** `k = 5.0`, `g = 9.6`
- **Calculation:** $\text{res} = 5.0^2 + (9.6 - 5.0) / 2.3 = 27.0$
- **Expected output:**
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