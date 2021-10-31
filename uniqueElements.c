/*Write a C program to print all the Unique elements of the given array */
#include<stdio.h>
void main()
{
	int a[100], i, j, n;
	printf("Enter the size of array : ");
	scanf("%d", &n);
	printf("Enter %d elements : ", n);
	for(i = 0; i < n; i++)
	scanf("%d", &a[i]);
	printf("Unique elements : ");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < i; j++)
		{
			if(a[i] == a[j])
			break;
		}
		if(i == j)
			printf("%d ",a[i]);
	}
	printf("\n");
}