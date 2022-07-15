#ifndef STUDENT_H
#define STUDENT_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student
{
	char *name;
	int grade;
	struct student *next;
} student;
int print_list(const student *head);
int sum (const student *head);
float avg (const student *head);
int max_grade (const student *head);
#endif
