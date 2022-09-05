#include <stdio.h>
void temp_info(int * temps);
int main()
{
	const char *days[7] = {"Monday", "Tuesday", "Wednesday", "Thursaday", "Friday", "Saturday", "Sunday"};
	int i;
	int arr[7];

	for (i = 0; i < 7; ++i)
	{
		printf("Enter temperature of %s: ", days[i]);
		scanf("%d", &arr[i]);
	}

	temp_info(arr);
	temp_sort(arr, 7);
	printf("Temperatures sorted:\n");
        for (i = 0; i < 7; i++)
        {
                printf("%i ", arr[i]);
        }
        printf("\n");
	return 0;
}
void temp_info(int * temps)
{
	const char *days[7] = {"Monday", "Tuesday", "Wednesday", "Thursaday", "Friday", "Saturday", "Sunday"};
	int i, j, hottest, coldest, amplitude;

	hottest = coldest = temps[0];
	for (i = 0; temps[i]; i++)
	{
		if (temps[i] > hottest)
			hottest = temps[i];
	}
	for (j = 0; temps[j]; j++)
	{
		if (temps[j] < coldest)
			coldest = temps[j];
	}
	amplitude = hottest - coldest;
	printf("Hottest day is %s with temperature %i\n", days[i], hottest);
	printf("Coldest day is %s with temperature %i\n", days[j], coldest);
	printf("Amplitude is %i\n", amplitude);
}
void temp_sort(int *temps, int n)
{
	int i, j, k;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (temps[j] < temps[i])
			{
				k = temps[i];
				temps[i] = temps[j];
				temps[j] = k;
			}
		}
	}
}
