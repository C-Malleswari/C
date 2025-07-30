#  Control Statements in C

##  1. Check Whether Two Integers Are Equal or Not
```c
#include<stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if(a == b)
        printf("Both numbers are equal.\n");
    else
        printf("Numbers are not equal.\n");
}
```

##  2. Check Even or Odd
```c
#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}
```

##  3. Check Positive or Negative
```c
#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num >= 0)
        printf("Positive\n");
    else
        printf("Negative\n");
}
```

##  4. Leap Year or Not
```c
#include<stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("Leap year\n");
    else
        printf("Not a leap year\n");
}
```

##  5. Check Voting Eligibility
```c
#include<stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age >= 18)
        printf("Eligible to vote\n");
    else
        printf("Not eligible to vote\n");
}
```

##  6. Display N Based on M Value
```c
#include<stdio.h>
int main() {
    int m, n;
    printf("Enter value of m: ");
    scanf("%d", &m);
    if(m > 0) n = 1;
    else if(m == 0) n = 0;
    else n = -1;
    printf("Value of n: %d\n", n);
}
```

##  7. Largest of Three Numbers
```c
#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a >= b && a >= c)
        printf("Largest is: %d\n", a);
    else if(b >= a && b >= c)
        printf("Largest is: %d\n", b);
    else
        printf("Largest is: %d\n", c);
}
```

##  8. Vowel or Consonant
```c
#include<stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Vowel\n");
    else
        printf("Consonant\n");
}
```

##  9. Alphabet or Not
```c
#include<stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("Alphabet\n");
    else
        printf("Not an alphabet\n");
}
```

##  10. Min or Max Between Two Numbers
```c
#include<stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a > b)
        printf("Max: %d\n", a);
    else if(b > a)
        printf("Max: %d\n", b);
    else
        printf("Both are equal\n");
}
```

##  11. Weekday from Week Number
```c
#include<stdio.h>
int main() {
    int day;
    printf("Enter week number (1-7): ");
    scanf("%d", &day);
    switch(day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Invalid week number\n");
    }
}
```

##  12. Uppercase or Lowercase
```c
#include<stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase\n");
    else if(ch >= 'a' && ch <= 'z')
        printf("Lowercase\n");
    else
        printf("Not an alphabet\n");
}
```

##  13. Days in Month
```c
#include<stdio.h>
int main() {
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 days\n"); break;
        case 4: case 6: case 9: case 11:
            printf("30 days\n"); break;
        case 2:
            printf("28 or 29 days\n"); break;
        default:
            printf("Invalid month\n");
    }
}
```

##  14. Max Between Two Numbers Using Switch
```c
#include<stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    switch(a > b) {
        case 1: printf("Max is: %d\n", a); break;
        case 0: printf("Max is: %d\n", b); break;
    }
}
```

##  15. Print Even Numbers 1 to 20
```c
#include<stdio.h>
int main() {
    for(int i = 1; i <= 20; i++) {
        if(i % 2 == 0)
            printf("%d ", i);
    }
    printf("\n");
}
```

##  16. Sum from 1 to 100 Using While Loop
```c
#include<stdio.h>
int main() {
    int i = 1, sum = 0;
    while(i <= 100) {
        sum += i;
        i++;
    }
    printf("Sum: %d\n", sum);
}
```

##  17. Factorial Using For Loop
```c
#include<stdio.h>
int main() {
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        fact *= i;
    printf("Factorial: %d\n", fact);
}
```

##  18. Prime Number Check Using While Loop
```c
#include<stdio.h>
int main() {
    int num, i = 2, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(i <= num / 2) {
        if(num % i == 0) {
            isPrime = 0;
            break;
        }
        i++;
    }
    if(num <= 1) isPrime = 0;
    if(isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");
}
```

##  19. Sum of Digits Using While Loop
```c
#include<stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
}
```

##  20. Fibonacci Series Up to N Terms
```c
#include<stdio.h>
int main() {
    int n, a = 0, b = 1, c;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d %d ", a, b);
    for(int i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}
```

