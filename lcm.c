/*Write a Program to find the LCM of the given numbers*/
#include<stdio.h>
int gcd (int, int);
void main()
{
	int a, b, lcm;
	printf("Enter two integer values : ");
	scanf("%d%d", &a, &b);
	lcm = (a * b) / gcd(a, b);
	printf("The lcm of two numbers %d and %d = %d\n", a, b, lcm);
}
int gcd (int x, int y)
{
	while(x != y)
	{
		if(x > y)
			x = x - y;
		else
			y = y - x;
	}
	return (y);
}