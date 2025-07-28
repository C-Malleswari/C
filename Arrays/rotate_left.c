#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=0,n=0,temp;
	int arr[100];
	printf("enter the number of elements(<100): ");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	temp = arr[0];
	for(i=0;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[i]=temp;
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
}



