#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count_letter(char * text, char c);
int main()
{
	char text[1000];
	char c = 's';
	int result = 0;
	
	printf("Enter  the string: ");
	scanf("%s" , text);
	getchar();
	result = count_letter(text,c);
	printf("Character '%c' occurs %d times.\n", c, result);
	return 0;
}
int count_letter(char * text, char c)
{
	int i, result = 0;

	for (i = 0; text[i] != '\0'; i++)
	{
		if (text[i] == c)
			result++;
	}
	return (result);
}
