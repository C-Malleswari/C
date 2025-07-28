#include <stdio.h>
#include <string.h>

int longestUniqueSubstrBitmask(char *str) {
    int maxLen = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        int mask = 0;
        int currLen = 0;

        for (int j = i; j < len; j++) {
            int bit = str[j] - 'A';
            if (bit < 0 || bit > 25) break;  // Not a lowercase letter

            if ((mask & (1 << bit)) > 0)
                break;

            mask |= (1 << bit);
            currLen++;
            if (currLen > maxLen)
                maxLen = currLen;
        }
    }
    return maxLen;
}

int main() {
   // char str[] = "ABCDABCDEFABC";
   // char str[] = "ABCDABCDEabcd";
	char str[] = "AaBbCcDdAaBbC";
	int i;
	printf("Bitmasking Method: Length of longest substring = %d\n,%c\n", longestUniqueSubstrBitmask(str),str[i]);
    return 0;
}
