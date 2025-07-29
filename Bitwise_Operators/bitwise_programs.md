## 28_toggle_a_given_range_of_bits.c

```c
// Toggle a given range of bits (e.g., bits 4 to 7)
#include <stdio.h>

int toggle_range(int num, int left, int right) {
    int mask = ((1 << (right - left + 1)) - 1) << left;
    return num ^ mask;
}

int main() {
    int num = 245; // binary: 11110101
    int left = 4, right = 7;
    int result = toggle_range(num, left, right);
    printf("Result after toggling bits %d to %d: %d\n", left, right, result);
    return 0;
}
```

## 29_check_if_a_particular_bit_is_set_or_not_in_a_number.c

```c
// Check if a particular bit is set
#include <stdio.h>

int main() {
    int num = 10, bit = 3; // check 3rd bit in 1010
    if (num & (1 << bit))
        printf("Bit %d is set\n", bit);
    else
        printf("Bit %d is not set\n", bit);
    return 0;
}
```

## 30_represent_above_all_things_in_macro_for_realtime_code.c

```c
// Represent bit operations in MACRO
#include <stdio.h>

#define SET_BIT(n, pos) ((n) | (1 << (pos)))
#define CLR_BIT(n, pos) ((n) & ~(1 << (pos)))
#define TOG_BIT(n, pos) ((n) ^ (1 << (pos)))
#define IS_BIT_SET(n, pos) (((n) >> (pos)) & 1)

int main() 
{
    int num = 5;
    printf("Set 1st bit: %d\n", SET_BIT(num, 1));
    printf("Clear 0th bit: %d\n", CLR_BIT(num, 0));
    printf("Toggle 2nd bit: %d\n", TOG_BIT(num, 2));
    printf("Is 0th bit set? %d\n", IS_BIT_SET(num, 0));
    return 0;
}
```

## 31_macro_to_swap_bytes_in_16bit_integer.c

```c
// Macro to swap bytes in a 16-bit integer
#include <stdio.h>
#define SWAP_16(x) (((x & 0x00FF) << 8) | ((x & 0xFF00) >> 8))

int main() 
{
    unsigned short x = 0x1234;
    printf("Swapped: 0x%04X\n", SWAP_16(x));
    return 0;
}
```

## 32_macro_to_swap_bytes_in_32bit_integer.c

```c
// Macro to swap bytes in a 32-bit integer
#include <stdio.h>
#define SWAP_32(x) (((x & 0xFF000000) >> 24) | \
                    ((x & 0x00FF0000) >> 8)  | \
                    ((x & 0x0000FF00) << 8)  | \
                    ((x & 0x000000FF) << 24))

int main() 
{
    unsigned int x = 0x12345678;
    printf("Swapped: 0x%08X\n", SWAP_32(x));
    return 0;
}
```

## 33_macro_to_swap_bytes_in_64bit_integer.c

```c
#include <stdio.h>

#define SWAP_64(x) ( \
    (((x) & 0x00000000000000FFULL) << 56) | \
    (((x) & 0x000000000000FF00ULL) << 40) | \
    (((x) & 0x0000000000FF0000ULL) << 24) | \
    (((x) & 0x00000000FF000000ULL) << 8)  | \
    (((x) & 0x000000FF00000000ULL) >> 8)  | \
    (((x) & 0x0000FF0000000000ULL) >> 24) | \
    (((x) & 0x00FF000000000000ULL) >> 40) | \
    (((x) & 0xFF00000000000000ULL) >> 56))

int main() 
{
    unsigned long long x = 0x1122334455667788ULL;
    unsigned long long swapped = SWAP_64(x);
    printf("Original: 0x%016llX\\n", x);
    printf("Swapped : 0x%016llX\\n", swapped);
    return 0;
}


```

## 34_find_whether_the_number_is_odd_or_even.c

```c
// Check if a number is odd or even using bitwise AND
#include <stdio.h>

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num & 1)
        printf("%d is Odd\\n", num);
    else
        printf("%d is Even\\n", num);

    return 0;
}

```

## 35_clear_the_last_right_side_set_bit_of_a_number.c

```c
#include <stdio.h>

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = num & (num - 1);

    printf("Original number: %d\\n", num);
    printf("After clearing the last set bit: %d\\n", result);

    return 0;
}


```

## 36_check_if_the_number_is_a_power_of_2.c

```c
#include <stdio.h>

int isPowerOfTwo(int n) 
{
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPowerOfTwo(num))
        printf("%d is a power of 2\\n", num);
    else
        printf("%d is NOT a power of 2\\n", num);

    return 0;
}


```

## 37_count_the_number_of_set_bits_in_a_number.c

```c

#include <stdio.h>

int countSetBits(int n) 
{
    int count = 0;
    while (n) {
        count++;
        n = n & (n - 1); // clear the rightmost set bit
    }
    return count;
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = countSetBits(num);
    printf("Number of set bits in %d is %d\\n", num, result);

    return 0;
}
/*
#include <stdio.h>

int countSetBits(int n) 
{
    int count = 0;
    for (int i = 0; i < sizeof(int) * 8; i++) 
    {
        if (n & (1 << i)) 
        {
            count++;
        }
    }
    return count;
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = countSetBits(num);
    printf("Number of set bits in %d is %d\\n", num, result);

    return 0;
}
*/

```

## 38_swap_two_bits_at_a_given_position_in_an_integer.c

```c
// Swap two bits at a given position in an integer
#include <stdio.h>

// Function to swap bits at positions pos1 and pos2
int swapBits(int n, int pos1, int pos2) 
{
    // Extract bits at positions pos1 and pos2
    int bit1 = (n >> pos1) & 1;
    int bit2 = (n >> pos2) & 1;

    // If the bits are different, we need to toggle them
    if (bit1 != bit2) 
    {    
        int mask = (1 << pos1) | (1 << pos2);
        n ^= mask; 
    }

    return n;
}

int main() 
{
    int number = 42; // Example: 42 = 0b00101010
    int pos1 = 1;
    int pos2 = 5;

    printf("Original number: %d (0x%X)\n", number, number);

    int result = swapBits(number, pos1, pos2);
    printf("After swapping bit %d and bit %d: %d (0x%X)\n", pos1, pos2, result, result);

    return 0;
}



/*
#include <stdio.h>

// Function to print binary representation
void printBinary(int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
        if (i % 4 == 0) printf(" "); // spacing every 4 bits
    }
    printf("\n");
}

// Function to swap bits at positions pos1 and pos2
int swapBits(int n, int pos1, int pos2) {
    int xor = ((n >> pos1) ^ (n >> pos2)) & 1;
    if (xor) {
        n ^= (1 << pos1);
        n ^= (1 << pos2);
    }
    return n;
}

int main() {
    int num = 42;  // Binary: 00000000 00000000 00000000 00101010
    int pos1 = 1;
    int pos2 = 2;

    printf("Original number: %d\nBinary:    ", num);
    printBinary(num);

    int swapped = swapBits(num, pos1, pos2);

    printf("\nAfter swapping bit %d and bit %d:\n", pos1, pos2);
    printf("Decimal: %d\nBinary:  ", swapped);
    printBinary(swapped);

    return 0;
}
*/


```

## 39_swap_all_even_and_odd_bits.c

```c
// Swap all even and odd bits
#include <stdio.h>

// Function to print binary
void printBinary(unsigned int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
        if (i % 4 == 0) printf(" ");
    }
    printf("\n");
}

// Function to swap all even and odd bits
unsigned int swapEvenOddBits(unsigned int n) 
{
    unsigned int even_bits = n & 0xAAAAAAAA; // Mask for odd bit positions
    unsigned int odd_bits  = n & 0x55555555; // Mask for even bit positions

    even_bits >>= 1;  // Right shift odd bits
    odd_bits  <<= 1;  // Left shift even bits

    return (even_bits | odd_bits); 
}

int main() 
{
    unsigned int num = 23;  // Binary: 00000000 00000000 00000000 00010111
    printf("Original number: %u\nBinary:    ", num);
    printBinary(num);

    unsigned int swapped = swapEvenOddBits(num);
    printf("\nAfter swapping even and odd bits:\n");
    printf("Decimal: %u\nBinary:  ", swapped);
    printBinary(swapped);

    return 0;
}


```



## 46_swap_variables_without_temporary_variable.c

```c
// Swap variables without temporary variable
#include <stdio.h>

int main() 
{
    int a = 5, b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swap:  a = %d, b = %d\n", a, b);

    return 0;
}


```

## 47_even_or_odd_using_modulus_operator.c

```c
// Even or odd using modulus operator
#include <stdio.h>

int main() 
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);

    return 0;
}


```

## 48_divisible_by_both_6_and_9_using_bitwise.c

```c
// Divisible by both 6 and 9 using bitwise
#include <stdio.h>

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 18 == 0)
        printf("%d is divisible by both 6 and 9\n", num);
    else
        printf("%d is NOT divisible by both 6 and 9\n", num);

    return 0;
}


```

## 49_maximum_of_three_numbers_using_conditional_operator.c

```c
// Maximum of three numbers using conditional operator
#include <stdio.h>

int main() 
{
    int a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Maximum is: %d\n", max);

    return 0;
}


```

## 50_check_if_number_is_less_than_50_without_'<'.c

```c
// Check if number is less than 50 without '<'
#include <stdio.h>

int is_less_than_50(int n) {
    return ((n + (~49 + 1)) >> 31) & 1;  // Equivalent to (n - 50) using bitwise
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Bitwise-only output
    const char* result[] = { "NOT less than 50", "LESS than 50" };
    printf("%d is %s\n", n, result[is_less_than_50(n)]);

    return 0;
}

/*#include <stdio.h>

int isLessThan50(int num) {
    int diff = num - 50;

    // Check sign bit: if negative, result is non-zero
    return (diff >> 31) & 1;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isLessThan50(n))
        printf("%d is LESS than 50\n", n);
    else
        printf("%d is NOT less than 50\n", n);

    return 0;
}
*/

```

## 51_expression_evaluation__a=int.c

```c
// Expression evaluation - a=int
#include <stdio.h>

int main() {
    // TODO: Implement the logic
    return 0;
}

```


## 53_check_if_binary_representation_is_palindrome.c

```c
// Check if binary representation is palindrome

#include <stdio.h>

int isBinaryPalindrome(unsigned int n) 

{
    unsigned int rev = 0;
    unsigned int original = n;
    
    while (n > 0) 
    {
        rev = (rev << 1) | (n & 1);  // build reverse bits
        n >>= 1;
    }

    return original == rev;
}

int main() 
{
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    if (isBinaryPalindrome(num))
        printf("Binary of %u is a palindrome\n", num);
    else
        printf("Binary of %u is NOT a palindrome\n", num);

    return 0;
}
/*#include <stdio.h>

// Function to get the bit at a specific position
int getBit(int n, int pos) {
    return (n >> pos) & 1;
}

// Function to check if binary representation is a palindrome
int isBinaryPalindrome(unsigned int n) {
    int left = 31;
    int right = 0;

    // Skip leading zeros
    while (left > 0 && getBit(n, left) == 0)
        left--;

    while (left > right) {
        if (getBit(n, left) != getBit(n, right))
            return 0; // Not a palindrome
        left--;
        right++;
    }

    return 1; // Is a palindrome
}

int main() {
    unsigned int num;
    printf("Enter an integer: ");
    scanf("%u", &num);

    if (isBinaryPalindrome(num))
        printf("Binary representation of %u is a palindrome\n", num);
    else
        printf("Binary representation of %u is NOT a palindrome\n", num);

    return 0;
}
*/


```

## 54_left_rotate_bits_by_specified_positions.c

```c
// Left rotate bits by specified positions
#include <stdio.h>

// Function to left rotate bits by 'd' positions in 32-bit number
unsigned int leftRotate(unsigned int n, int d) 
{
    return (n << d) | (n >> (32 - d));
}

int main() 
{
    unsigned int num;
    int shift;

    printf("Enter an unsigned integer: ");
    scanf("%u", &num);

    printf("Enter number of positions to left rotate: ");
    scanf("%d", &shift);

    unsigned int result = leftRotate(num, shift);

    printf("After left rotating %u by %d positions: %u\n", num, shift, result);

    return 0;
}

/*
#include <stdio.h>

int main() {
    unsigned int num = 5;     // Example: 000...0101
    int shift = 2;

    unsigned int result = (num << shift) | (num >> (32 - shift));

    printf("Original number: %u\n", num);
    printf("After left rotating by %d bits: %u\n", shift, result);

    return 0;
}
*/

```

## 55_reverse_bits_of_a_number.c

```c
// Reverse bits of a number
#include <stdio.h>

unsigned int reverseBits(unsigned int n) 
{
    unsigned int rev = 0;
    for (int i = 0; i < 32; i++) 
    {
        rev <<= 1;           // Shift result left
        rev |= (n & 1);      // Add the last bit of n
        n >>= 1;             // Shift n right
    }
    return rev;
}

int main() 
{
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    unsigned int result = reverseBits(num);

    printf("Reversed bits of %u = %u\n", num, result);

    return 0;
}


```

## 56_check_if_number_has_alternate_bits_set.c

```c
// Check if number has alternate bits set
#include <stdio.h>

int hasAlternateBits(unsigned int n) 
{
    // XOR the number with itself shifted right by 1
    unsigned int x = n ^ (n >> 1);

    // Check if result is all 1s (e.g., 0b111...1)
    return ((x & (x + 1)) == 0);
}

int main() 
{
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    if (hasAlternateBits(num))
        printf("%u has alternate bits set.\n", num);
    else
        printf("%u does NOT have alternate bits set.\n", num);

    return 0;
}
/*
#include <stdio.h>

int hasAlternateBits(unsigned int n) {
    while (n > 0) {
        int last_bit = n & 1;
        int next_bit = (n >> 1) & 1;

        // If two consecutive bits are the same, return false
        if (last_bit == next_bit)
            return 0;

        n = n >> 1; // Move to next bit
    }
    return 1;
}

int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    if (hasAlternateBits(num))
        printf("Yes, alternate bits are set!\n");
    else
        printf("No, not alternate bits.\n");

    return 0;
}
*/

```

## 57_count_bits_to_convert_a_to_b.c

```c
// Count bits to convert A to B
#include <stdio.h>

// Function to count set bits
int countBitsToConvert(int a, int b) 
{
    int xor = a ^ b;  // XOR will have set bits where a and b differ
    int count = 0;

    while (xor) 
    {
        count += xor & 1;
        xor >>= 1;
    }
    return count;
}

int main() 
{
    int a, b;
    printf("Enter two numbers A and B:\n");
    scanf("%d %d", &a, &b);

    int flips = countBitsToConvert(a, b);

    printf("Bits to flip to convert %d to %d = %d\n", a, b, flips);

    return 0;
}
/*
#include <stdio.h>

int main() {
    int a, b, count = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int xor = a ^ b;  // XOR gives differing bits

    while (xor > 0) {
        if (xor & 1)
            count++;
        xor = xor >> 1;
    }

    printf("Number of bits to flip to convert %d to %d: %d\n", a, b, count);

    return 0;
}
*/

```

## 58_check_if_number_is_power_of_4.c

```c
// Check if number is power of 4
#include <stdio.h>

int isPowerOfFour(int n) 
{
    // Must be positive, a power of 2, and only 1-bit at even position
    return (n > 0) && ((n & (n - 1)) == 0) && (n & 0x55555555);
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPowerOfFour(num))
        printf("%d is a power of 4\n", num);
    else
        printf("%d is NOT a power of 4\n", num);

    return 0;
}
/*#include <stdio.h>

int isPowerOfFour(int n) {
    while (n > 1) {
        if (n % 4 != 0)
            return 0;
        n = n / 4;
    }
    return n == 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPowerOfFour(num))
        printf("%d is a power of 4\n", num);
    else
        printf("%d is NOT a power of 4\n", num);

    return 0;
}
*/

```

## 59_swap_adjacent_bits.c

```c
// Swap adjacent bits
#include <stdio.h>

int swapAdjacentBits(int n)
{
    // 0xAAAAAAAA = 101010...10 (for even bits)
    // 0x55555555 = 010101...01 (for odd bits)
    int even_bits = n & 0xAAAAAAAA;
    int odd_bits  = n & 0x55555555;

    even_bits >>= 1;   // Shift even bits right
    odd_bits  <<= 1;   // Shift odd bits left

    return (even_bits | odd_bits);
}

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int swapped = swapAdjacentBits(n);
    printf("Original: %d\nSwapped Adjacent Bits: %d\n", n, swapped);
    return 0;
}
/*#include <stdio.h>

int swap_adjacent(int n) {
    int even = n & 0xAAAAAAAA;  // Get even-position bits
    int odd  = n & 0x55555555;  // Get odd-position bits

    even = even >> 1;           // Right shift even bits
    odd  = odd << 1;            // Left shift odd bits

    return (even | odd);        // Combine the results
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = swap_adjacent(n);
    printf("Swapped adjacent bits: %d\n", result);

    return 0;
}
*/


```

## 60_check_if_number_is_perfect_square.c

```c
// Check if number is perfect square
#include <stdio.h>
#include <math.h>

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int root = sqrt(num);  // Take square root

    if (root * root == num)
        printf("%d is a perfect square.\n", num);
    else
        printf("%d is not a perfect square.\n", num);

    return 0;
}
/*#include <stdio.h>

int main() {
    int num, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (i * i <= num) {
        if (i * i == num) {
            printf("%d is a perfect square.\n", num);
            return 0;
        }
        i++;
    }

    printf("%d is not a perfect square.\n", num);
    return 0;
}
*/

```

## 61_swap_first_and_last_bits.c

```c
// Swap first and last bits
#include <stdio.h>

// Function to swap first and last bits
int swapFirstLastBits(int n) 
{
    int numBits = sizeof(n) * 8;

    // Find position of the MSB (first set bit from left)
    int msbPos = -1;
    for (int i = numBits - 1; i >= 0; i--) 
    {
        if (n & (1 << i)) 
        {
            msbPos = i;
            break;
        }
    }

    if (msbPos == -1) return n; // no bits set

    int lsb = n & 1;                       // get LSB
    int msb = (n >> msbPos) & 1;           // get MSB

    // If both bits are same, no need to swap
    if (lsb == msb)
        return n;

    // Toggle both MSB and LSB bits
    n ^= (1 << 0);           // toggle LSB
    n ^= (1 << msbPos);      // toggle MSB

    return n;
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = swapFirstLastBits(num);
    printf("After swapping first and last bits: %d\n", result);

    return 0;
}
/* for 8bits
#include <stdio.h>

int swapFirstLastBits(int n) {
    int msb = (n >> 7) & 1;  // Get MSB (bit 7)
    int lsb = n & 1;         // Get LSB (bit 0)

    // If MSB and LSB are different, toggle them
    if (msb != lsb) {
        n ^= (1 << 7);  // Toggle MSB
        n ^= (1 << 0);  // Toggle LSB
    }
    return n;
}

int main() {
    int num;
    printf("Enter 8-bit number (0-255): ");
    scanf("%d", &num);

    int result = swapFirstLastBits(num);
    printf("After swapping MSB and LSB: %d\n", result);

    return 0;
}
*/
```

## 62_count_bits_to_flip_a_to_b.c

```c
// Count bits to flip A to B
#include <stdio.h>

// Function to count set bits
int countSetBits(int n) 
{
    int count = 0;
    while (n) 
    {
        count += n & 1;  // check last bit
        n >>= 1;         // right shift
    }
    return count;
}

int main() 
{
    int a, b;
    printf("Enter A and B: ");
    scanf("%d%d", &a, &b);

    int xor = a ^ b;  // XOR will give bits that differ
    int flips = countSetBits(xor);

    printf("Bits to flip to convert A to B = %d\n", flips);
    return 0;
}

```

## 63_check_if_number_is_power_of_8.c

```c
// Check if number is power of 8
#include <stdio.h>

// Function to check power of 8
int isPowerOf8(unsigned int n) 
{
    // Must be power of 2 (only one bit set)
    if (n == 0 || (n & (n - 1)) != 0)
        return 0;

    // Count number of 0s before the set bit
    int count = 0;
    while (n > 1) {
        n >>= 1;
        count++;
    }

    // If count is multiple of 3 → power of 8
    return (count % 3 == 0);
}

int main() 
{
    unsigned int n;
    printf("Enter number: ");
    scanf("%u", &n);

    if (isPowerOf8(n))
        printf("Yes, it's a power of 8.\n");
    else
        printf("No, it's not a power of 8.\n");

    return 0;
}


```

## 64_set_bits_at_odd_positions.c

```c
// Set bits at odd positions
#include <stdio.h>

int setOddPositionBits(int n) 
{
    unsigned int mask = 0xAAAAAAAA; // Binary: 101010... (bits at odd positions set)
    return n | mask;                // OR to set odd bits
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = setOddPositionBits(num);
    printf("Result after setting odd bits: %d\n", result);

    return 0;
}


```

## 65_count_set_bits_in_sum_of_two_numbers.c

```c
// Count set bits in sum of two numbers
#include <stdio.h>

// Function to count set bits
int countSetBits(int n) 
{
    int count = 0;
    while (n) 
    {
        count += n & 1;   // check last bit
        n >>= 1;          // right shift by 1
    }
    return count;
}

int main() 
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    int sum = a + b;
    printf("Sum = %d\n", sum);
    printf("Set bits in sum = %d\n", countSetBits(sum));

    return 0;
}
/*#include <stdio.h>

int countSetBits(int n) {
    int count = 0;
    while (n) {
        n &= (n - 1);  // Clears the rightmost set bit
        count++;
    }
    return count;
}

int main() {
    int a = 10, b = 5;
    int sum = a + b;

    printf("Sum = %d\n", sum);
    printf("Set bits in sum = %d\n", countSetBits(sum));

    return 0;
}
*/

```

## 66_check_if_number_is_power_of_16.c

```c
// Check if number is power of 16
#include <stdio.h>

int isPowerOf16(unsigned int n) 
{
    if (n == 0)
        return 0;

    // Keep dividing by 16
    while (n % 16 == 0)
        n /= 16;

    return (n == 1);
}

int main() 
{
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    if (isPowerOf16(num))
        printf("%u is a power of 16.\n", num);
    else
        printf("%u is NOT a power of 16.\n", num);

    return 0;
}


```

## 67_swap_bits_at_even_and_odd_positions.c

```c
// Swap bits at even and odd positions
#include <stdio.h>

int swap_even_odd_bits(int n) 
{
    // Mask even bits with 0xAAAAAAAA (1010 1010...) and shift right
    int even_bits = n & 0xAAAAAAAA;
    even_bits >>= 1;

    // Mask odd bits with 0x55555555 (0101 0101...) and shift left
    int odd_bits = n & 0x55555555;
    odd_bits <<= 1;

    // Combine them
    return (even_bits | odd_bits);
}

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int swapped = swap_even_odd_bits(n);
    printf("Result after swapping even and odd bits: %d\n", swapped);

    return 0;
}

```

## 68_toggle_bits_at_odd_positions.c

```c
// Toggle bits at odd positions
#include <stdio.h>

int toggle_odd_positions(int n) 
{
    // Mask with 1s at all odd positions: 0xAAAAAAAA = 101010... in binary (32-bit)
    return n ^ 0xAAAAAAAA;
}

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = toggle_odd_positions(n);

    printf("Result after toggling odd-position bits: %d\n", result);
    return 0;
}


```

