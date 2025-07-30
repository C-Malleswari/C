
## 21. Reverse a Given Number Using a While Loop

```c
#include <stdio.h>

int reverseNumber(int n) {
    int rev = 0;
    while(n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reversed number: %d\n", reverseNumber(num));
    return 0;
}

```

## 22. Find the largest element in an array using a for loop
```c
#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int arr[100], n;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Largest element: %d\n", findMax(arr, n));
    return 0;
}

```

## 23. Find the smallest element in an array using a while loop
```c
#include <stdio.h>

int findMin(int arr[], int size) 
{
    int min = arr[0];
    int i = 1;
    while(i < size) {
        if(arr[i] < min)
            min = arr[i];
        i++;
    }
    return min;
}

int main() 
{
    int arr[100], n;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Smallest element: %d\n", findMin(arr, n));
    return 0;
}

```

## 24. Print all the elements of an array using a for loop
```c
#include <stdio.h>

void printArray(int arr[], int size) {
    printf("Array elements: ");
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[100], n;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printArray(arr, n);
    return 0;
}

```

## 25. Find the sum of elements in an array using a while loop
```c
#include <stdio.h>

int sumArray(int arr[], int size) 
{
    int sum = 0, i = 0;
    while(i < size)
        sum += arr[i++];
    return sum;
}

int main() 
{
    int arr[100], n;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Sum of elements: %d\n", sumArray(arr, n));
    return 0;
}

```

## 26. Count the number of vowels in a given string using a for loop
```c
#include <stdio.h>

int countVowels(char str[]) {
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            count++;
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    //gets(str);
    fgets(str,sizeof(str),stdin);
    printf("Vowel count: %d\n", countVowels(str));
    return 0;
}

```

## 27. Count the number of words in a given string using a while loop
```c
#include <stdio.h>

int countWords(char str[]) 
{
    int i = 0, count = 0;
    while(str[i] != '\0') 
    {
        if((str[i] != ' ' && str[i+1] == ' ') || (str[i] != ' ' && str[i+1] == '\0'))
            count++;
        i++;
    }
    return count;
}

int main() 
{
    char str[100];
    printf("Enter a sentence: ");
    fgets(str,sizeof(str),stdin);
    printf("Word count: %d\n", countWords(str));
    return 0;
}

```

## 28. Check whether a given string is a palindrome using a for loop
```c
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) 
{
    int len = strlen(str);
    for(int i = 0; i < len/2; i++) 
    {
        if(str[i] != str[len-i-1])
            return 0;
    }
    return 1;
}

int main() 
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    if(isPalindrome(str))
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");
    return 0;
}

```

## 29. Concatenate two strings without using library functions using a while loop
```c
#include <stdio.h>

void concatenate(char s1[], char s2[]) 
{
    int i = 0, j = 0;
    while(s1[i] != '\0') i++;
    while(s2[j] != '\0') 
    {
        s1[i++] = s2[j++];
    }
    s1[i] = '\0';
}

int main() 
{
    char str1[100], str2[50];
    printf("Enter first string: ");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter second string: ");
    fgets(str2,sizeof(str2),stdin)
    concatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}

```

## 30. Find the length of a string using a for loop
```c
#include <stdio.h>

int stringLength(char str[]) 
{
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++)
        len++;
    return len;
}

int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    printf("Length of string: %d\n", stringLength(str));
    return 0;
}

```

