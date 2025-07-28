
//3. Bitmask-based (Only lowercase letters a-z)

#include <stdio.h>
#include <string.h>

void longest_bitmask(char *str) 
{
    int max_len = 0;
    int start_index = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        int mask = 0;
        for (int j = i; j < len; j++) 
        {
            int ch = str[j] - 'a';
	    printf("%d,%d,%c,%c\n",max_len,j,str[j],str[i]);
            if (mask & (1 << ch)) break;
            mask |= (1 << ch);
            if ((j - i + 1) > max_len) 
            {
                max_len = j - i + 1;
                start_index = i;
            }
        }
    }

    printf("Longest Unique Substring (Bitmask): ");
    for (int i = 0; i < max_len; i++)
        putchar(str[start_index + i]);
    printf("\nLength: %d\n", max_len);
}
int main() {
    char str[] = "abcdabcdefabc";
   longest_bitmask(str);
    return 0;
}
