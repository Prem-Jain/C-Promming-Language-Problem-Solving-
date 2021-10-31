/*Program to read details (rollno, name, dob, cgpa) of N students dynamically, store the data using structure (use nested structure for dob) and display all the details.
*/
#include<stdio.h>
#include<stdlib.h>
struct student
{
	int roll;
	char name[20];
	struct date
	{
		int day;
		int month;
		int year;
	}dob;
	float cgpa;
};
void main()
{
	struct student *details;
	int n,i;
	printf("Enter number of students: ");
	scanf("%d", &n);
	details = malloc(n*sizeof(struct student));
	for(i = 0; i < n; i++)
	{
		printf("Enter student %d data: \n", i+1);
		printf("Enter roll number: ");
		scanf("%d", &(details + i) -> roll);
		printf("Enter name: ");
		scanf("%s", (details + i) -> name);
		printf("Enter date of birth: ");
		scanf("%d/%d/%d", &(details + i) -> dob.day, &(details + i) -> dob.month, &(details + i) -> dob.year);
		printf("Enter cgpa: ");
		scanf("%f", &(details + i) -> cgpa);
	}
	for(i = 0; i < n; i++)
	{
		printf("Student %d data: \n", i + 1);
		printf("Roll number: %d\n", (details + i) -> roll);
		printf("Name: %s\n", (details + i) -> name);
		printf("Date of birth: %d/%d/%d\n", (details + i) -> dob.day, (details + i) -> dob.month, (details + i) -> dob.year);
		printf("Cgpa: %.2f\n", (details + i) -> cgpa);
	}
}