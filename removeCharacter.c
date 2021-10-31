/*Program to remove all characters in a string except alphabets and blank spaces */
#include<stdio.h>
#include<string.h>
void main()
{
	char s[50], a[50];
	int i, j = 0;
	printf("Enter a string: ");
	gets(s);
	for(i = 0; s[i]; i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] == ' ')
			a[j++] = s[i];
	}
	printf("Resultant String: ");
	puts(a);
}