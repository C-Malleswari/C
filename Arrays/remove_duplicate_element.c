#include<stdio.h>
int remove_duplicates(int arr[],int n)
{
	int i,j;
	int new_size=0;
	for(i=0;i<n;i++)
	{
		int dup = 0;
		for(j=0;j < new_size;j++)
		{
			if(arr[i]==arr[j])
			{
				dup=1;
				break;
			}
		}
		if(!dup)
		{
			arr[new_size]=arr[i];
			new_size++;
		}
	}
	return new_size;
}	
int main()
{
	int arr[10]={1,2,1,3,4,2,1,5,6,3};
	int size=sizeof(arr)/sizeof(arr[0]);

	int new = remove_duplicates(arr,size);

	for(int i=0;i<new;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
/*
 * #include <stdio.h>

int main() {
    int arr[100], n, i, j, k;
    int count;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate element counts:\n");
    for (i = 0; i < n; i++) {
        count = 1;
        if (arr[i] != -1) {
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1;
                }
            }
            if (count > 1) {
                printf("%d appears %d times\n", arr[i], count);
            }
        }
    }

    int unique[100], index = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] != -1) {
            unique[index++] = arr[i];
        }
    }

    printf("\nArray after removing duplicates:\n");
    for (i = 0; i < index; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}
 */
/* after sorting the array we can perform duplicates
 * #include <stdio.h>

// Function to sort array (simple bubble sort for beginners)
void sort_array(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to remove duplicates from sorted array
int remove_duplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;

    int new_size = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[new_size - 1]) {
            arr[new_size] = arr[i];
            new_size++;
        }
    }

    return new_size;
}

int main() {
    int arr[10] = {1, 2, 1, 3, 4, 2, 1, 5, 6, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Step 1: Sort the array
    sort_array(arr, size);

    // Step 2: Remove duplicates
    int new_size = remove_duplicates(arr, size);

    // Step 3: Print the final result
    printf("Sorted array without duplicates:\n");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/
