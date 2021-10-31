**/Program to generate a series of ‘N’ numbers based on the pattern of the numbers as : 9 13 22 36 55 79*/
#include <stdio.h>
void main()
{
	int n, a, b, i;
	a = 9;
	printf("Enter the number of terms you want: ");
	scanf("%d", &n);
	printf("The series is:");
	for(i = 0; i < n; i++)
	{
		printf(" %d", a);
		b = a + ((5 * i) + 4);
		a = b;
	}
	printf("\n");
}