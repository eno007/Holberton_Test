#include <stdlib.h>
#include <stdio.h>
int is_prime(int n);
int main()
{
	int n, result;

	printf("Enter a number to check if it prime:\n");
	scanf("%d",&n);
	result = is_prime(n);
	if (result == 1)
		printf("Result :%d\nThis number is prime!\n",result);
	else
		printf("Result :%d\nThis number is not prime!\n",result);
	return 0;
}
int is_prime(int n)
{
	int i;
	
	if (n == 0 || n == 1)
		return 0;
	for (i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
			return 0;
		break;
	}
	return 1;
}
