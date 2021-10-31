/*Program to find the number of prime numbers and number of composite numbers in an array to which memory is allocated dynamically using pointers.*/
#include<stdio.h>
#include<stdlib.h>
int prime (int);
void main()
{
	int i, j, pcount = 0, ccount = 0, fc, n;
	int *p;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Enter elements of array: ");
	p = malloc(n * sizeof(int));
	for(i = 0; i < n; i++)
		scanf("%d", p + i);
	for(i = 0; i < n; i++)
	{
		if(prime(*(p + i)) == 2)
			pcount++;
		else
			ccount++;
	}
	printf("Number of primes: %d\nNumber of composites %d\n", pcount, ccount);
}
int prime (int p)
{
	int i, fc = 0;
	for(i = 1; i <= p; i++)
	{
		if(p % i == 0)
			fc++;
	}
	return fc;
}