#include<stdio.h>
void main()
{
	int num;
	printf("Find the type of triangle based on angles or sides.\n1. Angles\n2. Sides\nEnter your choice: ");
	scanf("%d",&num);
	switch(num)
	{
		case 1:;	int a, b, c;
		printf("Enter the first angle: ");
		scanf("%d", &a);
		printf("Enter the second angle: ");
		scanf("%d", &b);
		printf("Enter the third angle: ");
		scanf("%d", &c);
		if(a + b + c == 180)
		{
			if(a == b && b == c)
				printf("The triangle is: Equilateral triangle\n");
			else if(a == b || b == c || c == a)
			{
				if(a == 90 || b == 90 || c == 90)
					printf("The triangle is: Isosceles Perpendicular triangle\n");
				else
					printf("The triangle is: Isosceles triangle\n");
			}
			else
				printf("The triangle is: Scalene triangle\n");
		}
		else
			printf("It is not a triangle.\n");
		break;
		case 2:	;	int x, y, z;
		printf("Enter the first side: ");
		scanf("%d", &x);
		printf("Enter the second side: ");
		scanf("%d", &y);
		printf("Enter the third side: ");
		scanf("%d", &z);
		if(x + y > z && y + z > x && z + x > y)
		{
			if(x == y && x == z)
			{
				printf("The triangle is: Equilateral triangle\n");
			}
			else if(x == y || y == z || z == x)
			{
				if((x * x) + (y * y) == (z * z) || (z * z) + (y * y) == (x * x) || (z * z) + (x * x) == (y * y))
					printf("The triangle is: Isosceles Perpendicular triangle\n");
				else
					printf("The triangle is: Isosceles triangle\n");
			}
			else
				printf("The triangle is: Scalene triangle\n");
		}
		else 
			printf("It is not a triangle.\n");
		break;
		default:
			printf("Invalid choice!!!\n");
		
	}
}