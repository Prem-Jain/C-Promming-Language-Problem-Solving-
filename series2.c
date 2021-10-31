/*Program to generate a series of ‘N’ numbers based on the pattern of the numbers as : 1 4 8 11 22 25 50*/
#include<stdio.h>
void main()
{
	int a, b, i, n;
	printf("Enter the number of terms you want: ");
	scanf("%d", &n);
	a = 1;
	printf("The series is:");
		for(i = 0; i < n; i++)
	{
		if(i % 2 == 0)
		{
			b = a + 3;
			printf(" %d", a);
			a=b;
		}
		else
		{
			b = a * 2;
			printf(" %d", a);
			a = b;
		}
	}
	printf("\n");
}