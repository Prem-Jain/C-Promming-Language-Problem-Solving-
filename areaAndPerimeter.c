#include <stdio.h>
#define PI 3.14
void main()
{
	int opt;
	do
	{
		printf("Enter your option\n1. triangle\n2. square\n3. circle\n4. rectangle\n5. exit\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1 :;
			float b, h, x, y, z, ta, tp;
			printf("Enter base and height of a triangle: ");
			scanf("%f%f", &b, &h);
			ta=(b * h) / 2;
			printf("Area of triangle: %f\n", ta);
			printf("Enter sides of triangle: ");
			scanf("%f%f%f", &x, &y, &z);
			tp = x + y + z;
			printf("Perimeter of triangle: %f\n", tp);
			break;
			case 2 :;
			float s, sa, sp;
			printf("Enter the length of a square: ");
			scanf("%f", &s);
			sa = s * s;
			sp = 4 * s;
			printf("Area of square: %f\nPerimeter of square: %f\n", sa, sp);
			break;
			case 3 :;
			float r, ca, cp;
			printf("Enter the radius of a circle: ");
			scanf("%f", &r);
			ca = PI * r * r;
			cp = 2 * PI * r;
			printf("Area of circle: %f\nPerimeter of circle: %f\n", ca, cp);
			break;
			case 4 :;
			float n, m, reca, recp;
			printf("Enter the length and breadth of rectangle: ");
			scanf("%f%f", &n, &m);
			reca = n * m;
			recp = 2 * (n + m);
			printf("Area of rectangle: %f\nPerimeter of rectangle: %f\n", reca, recp);
			break;
		}
	}
	while(opt<5);
}