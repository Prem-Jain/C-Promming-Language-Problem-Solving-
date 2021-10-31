/*Program to read monthly salary of an employee and calculate Income tax to be paid based on the following criteria:

< 100000 per year- no tax
100001 to 200000 per year- 5%
200001 to 300000 per year- 10%
300001 to 500000 per year- 20%
> 500000 per year- 30%*/


#include<stdio.h>
void main()
{
	float salary, yearly_sal, tax, amount;
	printf("Enter your monthly salary: ");
	scanf("%f", &salary);
	yearly_sal = salary * 12;
	if(yearly_sal < 100000)
	{
	tax = 0;
		printf("You are exempted from Income Tax.\nYou have to pay %f/- as income tax\n", tax);
	}		
	else if(yearly_sal <= 200000)
	{
		tax = (yearly_sal - 100000) * 0.05;
		printf("You have to pay %f/- as income tax\n",tax);
	}
	else if(yearly_sal <= 300000 && yearly_sal > 200001)
	{ 
		amount = (yearly_sal - 200000) * 0.1;
		tax = amount + 5000;
		printf("You have to pay %f/- as income tax\n",tax);
	}
	else if(yearly_sal <= 500000 && yearly_sal > 300001)
	{
		amount = (yearly_sal - 300000) * 0.20;
		tax = amount + 15000;
		printf("You have to pay %f/- as income tax\n",tax);
	}
	else if(yearly_sal > 500001)
	{
		amount = (yearly_sal - 500000) * 0.30;
		tax = amount + 55000;
		printf("You have to pay %f/- as income tax\n",tax);
	}
}