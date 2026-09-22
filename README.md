# Laboratory Work №1: Basic Variable Types & Simple Arithmetic Operations

**Course:** Algorithms and Data Structures (Part 1: C Programming Language)  
**Assigned Program:** **Program 1_2 (Arithmetic, Logical, and Relational Expressions)**  
**Variant:** **3 (Task 3)**

---

## 🎯 Objectives

- Master fundamental arithmetic operations and compound assignment operators (`+=`, `-=`, `*=`, `/=`).
- Understand increment and decrement operators (`++`, `--`) in both prefix (`++x`) and postfix (`x++`) forms.
- Practice relational (`>`, `<`, `==`, `!=`, `>=`, `<=`) and logical (`!`, `&&`, `||`) operators.
- Implement conditional expressions using the ternary operator (`condition ? true_expr : false_expr`).
- Analyze and explain operator precedence and evaluation order using inline comments.

---

## 📖 Reference Program (Program 1_2)

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a1 = 9, a2 = 2, b1, b2, b3;
    a2 += a1;                   // a2 = 2 + 9 = 11
    b1 = a2 / 4 + a2 % 4;       // b1 = 11 / 4 + 11 % 4 = 2 + 3 = 7
    b2 = b1 > b2 && b1 > a2;    // b3 = (7 > 3) && (7 > 11) ? false -> 0
    printf("b2=%d\n", b2);
    b3 = --b2;                  // b2 = b2 - 1 = 0 - 1 = -1; b3 = b2 = -1
    printf("a2=%d b1=%d b2=%d b3=%d\n", a2, b1, b2, b3);

    float f1 = 3.6f, f2 = 0.5f, r1, r2;
    r1 = f1 / f2;               // r1 = 3.6 / 0.5 = 7.2
    r2 = (f1 < f2) ? f1 + 2 : --f2; // (3.6 < 0.5) ? false -> 0.5 - 1 = -0.5
    printf("r1=%5.2f r2=%5.2f\n", r1, r2);

    system("pause");
    return 0;
}
```

---

## 📋 Assigned Tasks for Program 1_2

Each task requires implementing the specified sequence of expressions and explaining every result with comments.

### ⭐ Variant 3 (Task 3) — Assigned Variant

```c
a1 = 6;
a2 = 20;
a2 /= 5;
b1 = 5 * a1 + a2^2;
b2 = a1 > a2;
b3 = --b2;
f1 = 1.5;
f2 = 3.5;
r1 = f1 + 4 * f2;
r2 = (f1 >= f2) ? f1 - 2.5 : f2 + 5.2;
```

#### Step-by-Step Explanation of Variant 3:

1. **`a2 /= 5;`**
   - Compound division assignment.
   - $a_2 = 20 / 5 = 4$.
2. **`b1 = 5 * a1 + a2 * a2;`** ($a_2^2$)
   - $5 \times 6 + 4^2 = 30 + 16 = 46$.
   - $b_1 = 46$.
3. **`b2 = a1 > a2;`**
   - Relational test: $6 > 4$ is true ($1$).
   - $b_2 = 1$.
4. **`b3 = --b2;`**
   - Prefix decrement: $b_2$ is decremented before value assignment ($1 - 1 = 0$).
   - $b_2 = 0, \; b_3 = 0$.
5. **`r1 = f1 + 4 * f2;`**
   - $1.5 + 4 \times 3.5 = 1.5 + 14.0 = 15.50$.
   - $r_1 = 15.50$.
6. **`r2 = (f1 >= f2) ? f1 - 2.5 : f2 + 5.2;`**
   - Condition: $1.5 \ge 3.5$ is false ($0$).
   - Evaluates false branch: $f_2 + 5.2 = 3.5 + 5.2 = 8.70$.
   - $r_2 = 8.70$.

#### Expected Output for Variant 3:
```text
Integer results (Task 3 / Variant 3):
a1 = 6, a2 = 4, b1 = 46, b2 = 0, b3 = 0

Floating-point results (Task 3 / Variant 3):
f1 =  1.50, f2 =  3.50
r1 = 15.50, r2 =  8.70
```

---

### Other Tasks for Program 1_2

<details>
<summary><b>Task 1</b></summary>

```c
a1 = 3; a2 = 8; a2 -= a1; b1 = a1 + 2 * a2^2; b2 = !a1; b3 = b2++;
f1 = 1.5; f2 = 1.5; r1 = f1^2 + 2 * f2; r2 = (f1 != f2) ? f1 - 0.3 : f2 + 0.4;
```
- $a_2 = 8 - 3 = 5$
- $b_1 = 3 + 2 \times 25 = 53$
- $b_2 = !3 = 0$
- $b_3 = 0, \; b_2 = 1$ (postfix increment)
- $r_1 = 1.5^2 + 2 \times 1.5 = 2.25 + 3.0 = 5.25$
- $r_2 = (1.5 \ne 1.5) \rightarrow 1.5 + 0.4 = 1.90$
</details>

<details>
<summary><b>Task 2</b></summary>

```c
a1 = 2; a2 = 3; a2 *= 10; b1 = a1^3 + a2; b2 = a1 > a2; b3 = ++b2;
f1 = 1.5; f2 = 1.5; r1 = 2 * f1 - f2; r2 = (f1 == f2) ? f1 * 3 : f2 * 5;
```
- $a_2 = 3 \times 10 = 30$
- $b_1 = 2^3 + 30 = 8 + 30 = 38$
- $b_2 = (2 > 30) = 0$
- $b_3 = ++b_2 = 1, \; b_2 = 1$ (prefix increment)
- $r_1 = 2 \times 1.5 - 1.5 = 1.50$
- $r_2 = (1.5 == 1.5) \rightarrow 1.5 \times 3 = 4.50$
</details>

<details>
<summary><b>Task 4</b></summary>

```c
a1 = 3; a2 = 2; a2 += a1 + 5; b1 = a1^3 + 3 * a2; b2 = a1 < a2; b3 = b2--;
f1 = 1.5; f2 = 2.5; r1 = f1 / f2 * 2; r2 = (f1 <= f2) ? f1 - 0.2 : f2 + 0.7;
```
- $a_2 = 2 + 8 = 10$
- $b_1 = 3^3 + 3 \times 10 = 27 + 30 = 57$
- $b_2 = (3 < 10) = 1$
- $b_3 = 1, \; b_2 = 0$ (postfix decrement)
- $r_1 = (1.5 / 2.5) \times 2 = 1.20$
- $r_2 = (1.5 \le 2.5) \rightarrow 1.5 - 0.2 = 1.30$
</details>

<details>
<summary><b>Task 5</b></summary>

```c
a1 = 5; a2 = 13; a2 -= a1 + 5; b1 = a1 + a2^2; b2 = a1 > a2; b3 = b2++;
f1 = 4.5; f2 = 1.8; r1 = f1 + f2 / 2; r2 = (f1 > f2) ? f1 + 1.2 : f2 - 1.4;
```
- $a_2 = 13 - 10 = 3$
- $b_1 = 5 + 3^2 = 14$
- $b_2 = (5 > 3) = 1$
- $b_3 = 1, \; b_2 = 2$ (postfix increment)
- $r_1 = 4.5 + 1.8 / 2 = 5.40$
- $r_2 = (4.5 > 1.8) \rightarrow 4.5 + 1.2 = 5.70$
</details>

---

## ❓ Control Questions

1. What basic data types are available in C/C++? How many bytes does each data type occupy in memory?
2. What is the difference between prefix (`++x`, `--x`) and postfix (`x++`, `x--`) increment/decrement operators?
3. What are compound assignment operators, and how does `a2 /= 5` differ from `a2 = a2 / 5`?
4. How does the conditional (ternary) operator `condition ? expr1 : expr2` work in C?
5. Identify errors in the following code snippet and write the corrected version:
   ```c
   #include studio.h void main;
   {int i i:=52
   print('In year i weeks') }
   ```

---

## 📁 Repository File Structure

```text
.
├── README.md       # Laboratory guidelines and assignment description
└── src/
    ├── task_1.c    # Program 1_2: Task 1 implementation
    ├── task_2.c    # Program 1_2: Task 2 implementation
    ├── task_3.c    # Program 1_2: Task 3 implementation (Assigned Variant 3)
    ├── task_4.c    # Program 1_2: Task 4 implementation
    └── task_5.c    # Program 1_2: Task 5 implementation
```

## 🔨 Compilation & Execution

```bash
# Compile Variant 3 (Task 3)
gcc -std=c11 -Wall -Wextra src/task_3.c -o task3

# Run
./task3
```