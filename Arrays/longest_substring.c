//1. Sliding Window with ASCII Table (Efficient & Real-life usable)

#include <stdio.h>
#include <string.h>

void longest_unique_substring(char *str) {
    int last_index[256];  // ASCII table
    for (int i = 0; i < 256; i++) last_index[i] = -1;

    int max_len = 0, start = 0;
    int left = 0;
    int len = strlen(str);
    int start_index = 0;

    for (int right = 0; right < len; right++) {
        if (last_index[(unsigned char)str[right]] >= left) {
            left = last_index[(unsigned char)str[right]] + 1;
        }

        last_index[(unsigned char)str[right]] = right;

        if (right - left + 1 > max_len) {
            max_len = right - left + 1;
            start_index = left;
        }
    }

    printf("Longest Unique Substring: ");
    for (int i = 0; i < max_len; i++) {
        putchar(str[start_index + i]);
    }
    printf("\nLength: %d\n", max_len);
}
int main() {
    char str[] = "it is a cat and it is an animal";
    longest_unique_substring(str);
    return 0;
}
