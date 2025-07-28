//4.using two pointers
#include <stdio.h>
#include <string.h>

void longest_unique_substring_pointer(char *str) {
    int visited[256] = {0};
    char *start = str, *end = str;
    char *max_start = str;
    int max_len = 0;

    while (*end) {
        if (!visited[(unsigned char)*end]) {
            visited[(unsigned char)*end] = 1;
            int window_len = end - start + 1;
            if (window_len > max_len) {
                max_len = window_len;
                max_start = start;
            }
            end++;
        } else {
            visited[(unsigned char)*start] = 0;
            start++;
        }
    }

    // print result
    printf("Longest Unique Substring (Pointer version): ");
    for (int i = 0; i < max_len; i++)
        putchar(*(max_start + i));
    printf("\nLength: %d\n", max_len);
}
int main() {
    char str[] = "abcbdeac";
    longest_unique_substring_pointer(str);
    return 0;
}
