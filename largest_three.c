#include <stdio.h>
#include <stdlib.h>
int largest_three(int a, int b, int c);
int main()
{
	int a, b, c, result;
	
	printf("Enter the three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	result = largest_three(a, b, c);
	printf("Biggest number is: %d\n",result);
	return 0;
}
int largest_three(int a, int b, int c)
{
	if (a>b)
	{
		if (a>c)
			return (a);
		else
			return (c);
	}
	else
	{
		if (b>c)
			return (b);
		else
			return (c);
	}
}
