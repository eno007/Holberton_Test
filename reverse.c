#include <stdio.h>
#include <string.h>
void reverse(char *text);

int main()
{
	char text[1000];

	printf("Enter a string:\n");
	scanf("%s", text);
	reverse(text);
	printf("Reverse of the string is:\n\"%s\".\n", text);
	return 0;
}
int string_length(char *text)
{
	int c = 0;
	
	while ( *(text + c) != '\0' )
		c++;
	return c;
}
void reverse(char *text)
{
	int len, c;
	char *begin, *end, temp;
	
	len = string_length(text);
	begin = text;
	end = text;
	for (c = 0; c < len - 1; c++)
		end++;
	for (c = 0; c < len/2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}
