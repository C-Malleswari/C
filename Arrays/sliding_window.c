#include <stdio.h>
#include <string.h>

int longestUniqueSubstrSliding(char *str) {
    int visited[256];
    for (int i = 0; i < 256; i++) visited[i] = -1;

    int maxLength = 0, start = 0;
    int len = strlen(str);
    int startIndex = 0;

    for (int i = 0; i < len; i++) {
  	
       // printf("%d",visited[(unsigned char)str[i]]);
      	    if (visited[(unsigned char)str[i]] >= start) {
            start = visited[(unsigned char)str[i]] + 1;
         printf("%d\n",visited[(unsigned char)str[i]]);
	    }
        visited[(unsigned char)str[i]] = i;
        int currentLength = i - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
            startIndex = start;
        }
    }

    printf("Sliding Window: Substring = ");
    for (int i = 0; i < maxLength; i++)
        putchar(str[startIndex + i]);
    printf("\nLength = %d\n", maxLength);

    return 0;
}

int main() {
    char str[] = "abcdabcdefabc";
    longestUniqueSubstrSliding(str);
    return 0;
}
