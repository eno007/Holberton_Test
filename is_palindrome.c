#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int is_palindrome(char * text);
int main()
{
	int result;
	char *text;

	printf("Enter a string:\n");
	scanf("%s", text);
	result = is_palindrome(text);
	if (result == 0)
	{
		printf("%s is not a palindrome\n", text);
	}
	else
	{
		printf("%s is a palindrome\n", text);
	}
	return 0;
}
int is_palindrome(char * text)
{
	int i = 0, len = 0;

	while (text[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = 0; i < len ; i++)
	{
		if (text[i] != text[len - i])
		{
			return 0;
			break;
		}
		else
			return 1;
	}
	return 0;
}
