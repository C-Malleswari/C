# Longest Non-Repeating Substring Methods in C

This project demonstrates multiple approaches to solve the **Longest Substring Without Repeating Characters** problem using the C programming language. Each method highlights different algorithmic techniques.
##  Problem Statement

Given a string, find the length of the longest substring without repeating characters.

---

##  Implemented Methods

### 1. Brute Force
- Checks all possible substrings and verifies if all characters are unique.
- Time Complexity: **O(n³)**

### 2. Sliding Window
- Uses a dynamic window to track non-repeating characters.
- Time Complexity: **O(n)**

### 3. Optimized Sliding Window (Hashing)
- Optimizes the sliding window using a hash table (array) to store last seen indices.
- Time Complexity: **O(n)**

### 4. Bit Masking (for lowercase a-z only)
- Uses a 26-bit integer to represent character presence.
- Fast and memory-efficient.
- Time Complexity: **O(n²)**

### 5. Structure + Array Mapping
- Uses a `struct` array to store the last occurrence of each character.
- Clear and modular code with the same benefits as optimized hashing.
- Time Complexity: **O(n)**

---
##  Comparison Table

| Method                      | Time Complexity | Space Complexity | Handles All ASCII? | Real-Time Efficient| Notes                             |
|-----------------------------|-----------------|------------------|--------------------|--------------------|-----------------------------------|
| Brute Force                 | O(n³)           | O(1)             |  Yes               |  No                | Simple but inefficient            |
| Sliding Window              | O(n)            | O(256)           |  Yes               |  Yes               | Good balance of clarity/speed     |
| Optimized Sliding Window    | O(n)            | O(256)           |  Yes               |  Yes               | Very efficient and compact        |
| Bit Masking (a-z only)      | O(n²)           | O(1) (uses int)  |  No                | Yes (for a-z only) | Fastest for lowercase inputs only |
| Struct + Array              | O(n)            | O(256 * sizeof)  |  Yes               |  Yes               | Clean, modular, and extendable    |


##  File Structure

- `longest_non_repeating_substring.md ` (or respective function blocks inside markdown)
- Each method is self-contained and can be compiled independently.
- Sample inputs provided in each method's `main()`.

---

## Sample Input

```c
char str[] = "abcabcbb";

