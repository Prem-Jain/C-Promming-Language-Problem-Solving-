/*Program to keep reading positive integers as input until you press -1 and print the average of only the prime numbers you have read.*/
#include<stdio.h>
void main()
{
	int num,i,fc;
	float primeAvg, primeSum = 0, primeCount = 0;
	printf("Enter the digits(-1 to quit): ");
	scanf("%d", &num);
	while(num != -1)
	{
		fc = 0;
		for(i = 1; i <= num; i++)
		{
			if(num % i == 0)
				fc++;
		}
		if(fc == 2)
		{
			primeSum = primeSum+num;
			primeCount++;
		}
		scanf("%d", &num);
	}	
	primeAvg = primeSum / primeCount;
	printf("The average of the positive prime integers is: %f\n", primeAvg);
}