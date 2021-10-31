/*Program to perform addition, subtraction, multiplication and division of two complex numbers using structures to functions */
#include<stdio.h>
int ch;
void menu()
{
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nPress 5 to exit\nEnter your choice: ");
	scanf("%d", &ch);
}
struct complex 
{
	float real;
	float imag;
};
void display(float real,float imag)
{
	if(imag<0)
		printf("%f%fi\n", real, imag);
	
	else
		printf("%f+%fi\n", real, imag);
}
void add(struct complex, struct complex);
void sub(struct complex, struct complex);
void multiply(struct complex, struct complex);
void divide(struct complex, struct complex);
void main()
{
	struct complex c1,c2;
	printf("Enter real and imaginary parts of first complex number: ");
	scanf("%f%f", &c1.real, &c1.imag);
	printf("Enter real and imaginary parts of second complex number: ");
	scanf("%f%f", &c2.real, &c2.imag);
	printf("The first complex number is: ");
	display(c1.real, c1.imag);
	printf("The second complex number is: ");
	display(c2.real, c2.imag);
	while(ch<5)
	{
		switch(ch)
		{
			case 1: add(c1,c2);
				break;
			case 2: sub(c1,c2);
				break;
			case 3: multiply(c1,c2);
				break;
			case 4:divide(c1,c2);
				break;
		}
		menu();
	}
}
void add(struct complex a, struct complex b)
{
	struct complex c;
	printf("Addition result: ");
	c.real = a.real + b.real;
	c.imag = a.imag + b.imag;
	display(c.real, c.imag);
}
void sub(struct complex a, struct complex b)
{
	struct complex c;
	printf("Subtraction result: ");
	c.real = a.real - b.real;
	c.imag = a.imag - b.imag;
	display(c.real, c.imag);
}
void multiply(struct complex a, struct complex b)
{
	struct complex c;
	printf("Multiplication result: ");
	c.real = a.real * b.real - a.imag * b.imag;
	c.imag = a.real * b.imag + a.imag * b.real;
	display(c.real, c.imag);
}
void divide(struct complex a, struct complex b)
{
	struct complex c;
	printf("Division result: ");
	c.real = ((a.real * b.real) + (a.imag * b.imag)) / ((b.real * b.real) + (b.imag * b.imag));
	c.imag = ((a.real * (-b.imag)) + (a.imag * b.real)) / ((b.real * b.real) + (b.imag * b.imag));
	display(c.real, c.imag);
}