/*Write a C program to find the number of times digit 3 occurs in each and every number from 0 to N. Given a number N as input, count the number of 3s occurring in all the numbers from 0 to N*/
#include <stdio.h>
int count(int);
void main()
{
	int n, num3;
	printf("Enter the range: ");
	scanf("%d", &n);
	num3 = count(n);
	printf("Total occurrences of 3 from 0 to %d is %d\n", n, num3);
}
int count(int x)
{
	int i, i3, no3 = 0;
	for(i = 3; i <= x; i++)
	{   
		i3 = i;
		while(i3 != 0)
		{
			if(i3 % 10 == 3)
				no3++;
			i3 = i3/10;
		}
	}
	return(no3);
}