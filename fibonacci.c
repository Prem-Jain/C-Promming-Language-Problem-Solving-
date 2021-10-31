/*Write a C program to print the sum of the last two numbers in the generated Fibonacci series of N terms using recursion.*/
#include<stdio.h>
int fibonacci (int );
void main()
{
	int n,i;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("The fibonacci series of %d terms are :", n);
	for(i = 0; i < n; i++)
	{
	
		printf("  %d",fibonacci(i));
	}
	printf("\nsum of last two numbers = %d\n",fibonacci(n-1)+fibonacci(n-2));
}	

int fibonacci(int a)
{
	if(a == 0 || a == 1)
		return a;
	else
		return(fibonacci(a - 1) + fibonacci(a - 2));
}