#include "student.h"
/**
 * print_list - structure to print
 * @head: pointer of the linked list
 * Return: number of elements of the string
 */
int print_list(const student *head)
{
	int count = 0;

	if (head == NULL)
		printf("(nil)");
	while (head != NULL)
	{
		if (head->name == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s - [%d]\n", head->name, head->grade);
		count++;
		head = head->next;
	}
	return (count);
}
/**
 * avg - structure to print
 * @head: pointer of the linked list
 * Return: average
 */
int sum (const student *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->grade;
		head = head->next;
	}
	return (sum);
}
/**
 * avg - structure to print
 * @head: pointer of the linked list
 * Return: average
 */
float avg (const student *head)
{

	int c = 0;
	int s = 0;
	float avg = 0.0;
	
	while (head != NULL)
	{
		c++;
		s += head->grade;
		head = head->next;
	}
	avg = s / c;
	return (avg);
}
/**
 * max_grade - structure to print
 * @head: pointer of the linked list
 * Return: Highest grade
 */
int max_grade (const student *head)
{
	int max = 4;
	while (head != NULL)
	{
		if (max < head->grade)
			max = head->grade;
		head = head->next;
	}
	return (max);
}
