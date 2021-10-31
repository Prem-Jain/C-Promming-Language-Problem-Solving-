/*Write a program to check whether the given number is strong number or not.

[Hint: A number is called strong number if sum of the factorials of its digits is equal to number itself. For example: 145 since 1! + 4! + 5! = 1 + 24 + 120 = 145.]*/
#include<stdio.h>
int fact(int);
void main()
{
	int n, sn = 0, x, num;
	printf("Enter a value : ");
	scanf("%d",&num);
	n = num;
	while(n != 0)
	{
		x = n % 10;
		sn = sn + fact(x);
		n = n / 10;
	}
	if(num == sn)
		printf("The given number %d is a strong number\n",num);
	else 
		printf("The given number %d is not a strong number\n",num);
}

int fact(int num)
{
	int fact = 1,i = 1;
	while(i <= num)
	{
		fact = fact * i;
		i++;
	}
	return fact;
}