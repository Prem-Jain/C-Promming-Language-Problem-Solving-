/*Program to read today’s date and display tomorrow’s date using structures considering all cases. */
#include<stdio.h>
struct date
{
	int day;
	int month;
	int year;
};
void main()
{
	struct date today;
	printf("Enter today's date: ");
	scanf("%d/%d/%d",&today.day,&today.month,&today.year);
	if(today.day == 31 && (today.month == 1 || today.month == 3  || today.month == 5 || today.month == 7 || today.month == 8 || today.month == 10))
	{
		today.day = 1;
		today.month++;
	}
	else if(today.day < 30 || today.day < 31)
	{
		today.day++;
	}
	else if(today.day == 30 && (today.month == 4 || today.month == 6 || today.month == 9 || today.month == 11))
	{
		today.day = 1;
		today.month++;
	}
	else if(today.day == 29 && today.month == 2 && ((today.year % 400 == 0 || today.year % 100 != 0) && today.year % 4 == 0))
	{
		today.day = 1;
		today.month = 3;
	}
	else if(today.day == 28 && today.month == 2 && ((today.year % 400 == 0 || today.year%100 != 0)&&today.year % 4 == 0))
	{
		today.day = 29;
	}
	else if(today.day == 28 && today.month == 2)
	{
		today.day = 1;
		today.month = 3;
	}
	else if(today.day = 31 && today.month == 12)
	{
		today.day = 1;
		today.month = 1;
		today.year++;
	}
	printf("Next day is: %d/%d/%d\n",today.day, today.month, today.year);
}