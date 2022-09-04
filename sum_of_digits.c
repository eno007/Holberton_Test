#include <stdlib.h>
#include <stdio.h>
int sum_of_digits(int n);
int main()
{
	int n, result;

	printf("Enter a number to find the sum of the digits:\n");
	scanf("%d",&n);
	result = sum_of_digits(n);
	printf("For the number %d, sum is %d\n" , n, result);
	return 0;
}
int sum_of_digits(int n)
{
	if (n == 0)
		return 0;
	return (n%10 + sum_of_digits(n/10));
}
