#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * check_num - checks the number if it is
 * positive or negative
 * @a: pointer variable a
 *
 * Return: 1 if positive or -1 if negative
 */
int check_num(char *a)
{
	int k, len, num;

	k = 0;
	len = strlen(a);
	num = 0;

	while (k < len)
	{
		if (a[k] < '0' || a[k] > '9')
		{
			return (-1);
		}
		else
		{
			num = num * 10 + (a[k] - '0');
		}
		k++;
	}
	return (num);
}

/**
 * main - The main function
 * @argc: The count variable for arguments
 * @argv: The vector pointer variable for strings
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int k, num, sum;

	num = 0;

	for (k = 1; k < argc; k++)
	{
		num = check_num(argv[k]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
