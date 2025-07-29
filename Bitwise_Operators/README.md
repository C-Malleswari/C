
#  Bitwise Operators in C

This repository contains **C programs** demonstrating the usage and power of **bitwise operators**. These operators allow direct manipulation of bits in integers, which is useful in system programming, embedded development, driver code, and coding interviews.

---

## What are Bitwise Operators?

Bitwise operators perform operations on individual bits of integers.

| Operator | Name             | Description                                 |
|----------|------------------|---------------------------------------------|
| `&`      | Bitwise AND      | 1 if both bits are 1                        |
| `|`      | Bitwise OR       | 1 if at least one bit is 1                  |
| `^`      | Bitwise XOR      | 1 if bits are different                     |
| `~`      | Bitwise NOT      | Inverts all bits (1 → 0, 0 → 1)             |
| `<<`     | Left Shift       | Shifts bits to the left (multiply by 2)     |
| `>>`     | Right Shift      | Shifts bits to the right (divide by 2)      |

---

##  Why Use Bitwise Operators?

- Faster than arithmetic operations
- Used in low-level programming
- Required for bitmasking, toggling, checking status flags
- Used in microcontrollers, drivers, graphics, encryption, etc.

---
#  Bitwise Operators in C with Examples

Bitwise operators perform operations on individual bits of integer values. Here's a list of common bitwise operators in C with examples.

---

##  `&` Bitwise AND

**Truth Table:**

| A | B | A & B |
|---|---|-------|
| 0 | 0 |   0   |
| 0 | 1 |   0   |
| 1 | 0 |   0   |
| 1 | 1 |   1   |

**Example in C:**
```c
int a = 6;      // Binary: 0110
int b = 3;      // Binary: 0011
int c = a & b;  // Result: 0010 → c = 2
```

---

##  `|` Bitwise OR

**Truth Table:**

| A | B | A \| B |
|---|---|--------|
| 0 | 0 |   0    |
| 0 | 1 |   1    |
| 1 | 0 |   1    |
| 1 | 1 |   1    |

**Example in C:**
```c
int a = 6;      // 0110
int b = 3;      // 0011
int c = a | b;  // 0111 → c = 7
```

---

##  `^` Bitwise XOR (Exclusive OR)

**Truth Table:**

| A | B | A ^ B |
|---|---|--------|
| 0 | 0 |   0    |
| 0 | 1 |   1    |
| 1 | 0 |   1    |
| 1 | 1 |   0    |

**Example in C:**
```c
int a = 5;      // 0101
int b = 3;      // 0011
int c = a ^ b;  // 0110 → c = 6
```

---

## `~` Bitwise NOT (1's Complement)

**Flips all bits**.

**Example in C:**
```c
int a = 5;      // 00000000 00000000 00000000 00000101
int c = ~a;     // 11111111 11111111 11111111 11111010 → -6
```

---

##  `<<` Left Shift

**Shifts bits left, adds 0s at right. Equivalent to multiplying by 2ⁿ.**

**Example in C:**
```c
int a = 3;      // 00000011
int c = a << 1; // 00000110 → c = 6
```

---

##  `>>` Right Shift

**Shifts bits right, discards bits at right.**

**Example in C:**
```c
int a = 8;      // 00001000
int c = a >> 1; // 00000100 → c = 4
```
