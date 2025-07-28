
// 2. Brute-force (Beginner-friendly but less efficient)

#include <stdio.h>
#include <string.h>

int is_unique(char *str, int start, int end) {
    int visited[256] = {0};
    for (int i = start; i <= end; i++) {
        if (visited[(unsigned char)str[i]])
            return 0;
        visited[(unsigned char)str[i]] = 1;
    }
    return 1;
}

void longest_brute(char *str) {
    int len = strlen(str);
    int max_len = 0;
    int start_index = 0;

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (is_unique(str, i, j) && (j - i + 1) > max_len) {
                max_len = j - i + 1;
                start_index = i;
            }
        }
    }

    printf("Longest Unique Substring (Brute): ");
    for (int i = 0; i < max_len; i++) {
        putchar(str[start_index + i]);
    }
    printf("\nLength: %d\n", max_len);
}
int main() {
    char str[] = "abcbdeac";
    longest_brute(str);
    return 0;
}

