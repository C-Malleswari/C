#  Array Programs in C

##  1. Display Elements in Reverse Order
```c
#include<stdio.h>
int main() {
    int arr_size;
    printf("Enter the size of the array: ");
    scanf("%d", &arr_size);
    int arr[arr_size];

    printf("Enter the %d elements:\n", arr_size);
    for(int i = 0; i < arr_size; i++)
        scanf("%d", &arr[i]);

    printf("Original array: ");
    for(int i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);

    for(int i = 0, j = arr_size - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("\nReversed array: ");
    for(int i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
```

##  2. Copy Elements of One Array to Another
```c
#include<stdio.h>
int main() {
    int arr_size;
    printf("Enter the size of the array: ");
    scanf("%d", &arr_size);
    int arr1[arr_size], arr2[arr_size];

    printf("Enter the %d elements:\n", arr_size);
    for(int i = 0; i < arr_size; i++)
        scanf("%d", &arr1[i]);

    for(int i = 0; i < arr_size; i++)
        arr2[i] = arr1[i];

    printf("Original array: ");
    for(int i = 0; i < arr_size; i++)
        printf("%d ", arr1[i]);

    printf("\nCopied array: ");
    for(int i = 0; i < arr_size; i++)
        printf("%d ", arr2[i]);
}
```

##  3. Sum of All Array Elements
```c
#include<stdio.h>
int main() {
    int arr_size, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &arr_size);
    int arr[arr_size];

    printf("Enter the %d elements:\n", arr_size);
    for(int i = 0; i < arr_size; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Original array: ");
    for(int i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);

    printf("\nSum of elements: %d\n", sum);
}
```

##  4. Find Smallest and Largest Element in Array
```c
#include<stdio.h>
int main() {
    int array_size;
    printf("Enter the size of the array: ");
    scanf("%d", &array_size);
    int array[array_size];

    for(int i = 0; i < array_size; i++)
        scanf("%d", &array[i]);

    int small = array[0], large = array[0];
    for(int i = 0; i < array_size; i++) {
        if(array[i] < small)
            small = array[i];
        else if(array[i] > large)
            large = array[i];
    }

    printf("Largest element: %d\n", large);
    printf("Smallest element: %d\n", small);
}
```

##  5. Separate Odd and Even Elements into Arrays
```c
#include<stdio.h>
int main() {
    int array_size;
    printf("Enter the size of the array: ");
    scanf("%d", &array_size);
    int array[array_size];

    printf("Enter the elements:\n");
    for(int i = 0; i < array_size; i++)
        scanf("%d", &array[i]);

    int even[array_size], odd[array_size];
    int even_count = 0, odd_count = 0;

    for(int i = 0; i < array_size; i++) {
        if(array[i] % 2 == 0)
            even[even_count++] = array[i];
        else
            odd[odd_count++] = array[i];
    }

    printf("Even elements: ");
    for(int i = 0; i < even_count; i++)
        printf("%d ", even[i]);

    printf("\nOdd elements: ");
    for(int i = 0; i < odd_count; i++)
        printf("%d ", odd[i]);
}
```

##  6. Find Second Largest Element
```c
#include<stdio.h>
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int high = arr[0], second_high = arr[0];
    for(int i = 0; i < size; i++) {
        if(arr[i] > high) {
            second_high = high;
            high = arr[i];
        } else if(arr[i] > second_high && arr[i] < high) {
            second_high = arr[i];
        }
    }

    printf("First max: %d\n", high);
    printf("Second highest: %d\n", second_high);
}
```

## 7. Matrix Addition (3x4)
```c
#include<stdio.h>
int main() {
    int mat1[3][4] = {{1,2,8,4}, {3,2,1,4}, {5,6,7,8}};
    int mat2[3][4] = {{2,5,4,2}, {1,5,2,6}, {9,4,7,2}};
    int mat3[3][4];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
}
```

##  8. Find Second Smallest Element
```c
#include<stdio.h>
int main() {
    int arr[10] = {1,3,4,9,0,7,6,5,2,8};
    int small = arr[0], ssmall = arr[0];

    for(int i = 0; i < 10; i++) {
        if(arr[i] < small) {
            ssmall = small;
            small = arr[i];
        } else if(arr[i] < ssmall && arr[i] > small) {
            ssmall = arr[i];
        }
    }

    printf("Smallest: %d, Second Smallest: %d\n", small, ssmall);
}
```

##  9. Find Three Smallest Elements
```c
#include<stdio.h>
int main() {
    int arr[10] = {1,3,4,9,0,7,6,5,2,8};
    int small = arr[0], ssmall = arr[0], tsmall = arr[0];

    for(int i = 0; i < 10; i++) {
        if(arr[i] < small) {
            tsmall = ssmall;
            ssmall = small;
            small = arr[i];
        } else if(arr[i] < ssmall && arr[i] > small) {
            tsmall = ssmall;
            ssmall = arr[i];
        } else if(arr[i] < tsmall && arr[i] > ssmall) {
            tsmall = arr[i];
        }
    }

    printf("Three smallest: %d, %d, %d\n", small, ssmall, tsmall);
}
```
