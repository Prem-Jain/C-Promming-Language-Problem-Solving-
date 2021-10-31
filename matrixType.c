/*Program to find the type of given matrix. */
#include<stdio.h>
void main()
{
	int a[10][10], n, j, i, ltm = 0, utm = 0, zm = 0;
	printf("Enter the size of square matrix: ");
	scanf("%d", &n);
	printf("Enter the elements of the matrix:");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(i < j && a[i][j] != 0)
				ltm = 1;
			if(i > j && a[i][j] != 0)
				utm = 1;
			if(a[i][j] != 0)
				zm = 1;
		}
	}
	if(zm == 0)
		printf("The matrix is zero matrix.\n");
	else if(utm == 0 && ltm == 0)
		printf("The matrix is both lower and upper triangular.\n");
	else if(ltm == 0)
		printf("The matrix is lower triangular.\n");
	else if(utm == 0)
		printf("The matrix is upper triangular.\n");
	else
		printf("The matrix is normal matrix.\n");
}