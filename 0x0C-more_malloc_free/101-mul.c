#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: The count of arguments
 * @argv: The array of argument in char
 *
 * Return: The multiplication of two numbers
 */
int main(int argc, char *argv[])
{
	int n = argc;
	int mul, *num1, *num2;

	num1 = malloc(sizeof(*num1) * 10);
	num2 = malloc(sizeof(*num2) * 10);

	if (n != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (*num1 >= 10 || *num2 >= 10)
	{
		printf("Error\n");
		exit(98);
	}
	*num1 = atoi(argv[1]);
	*num2 = atoi(argv[2]);
	mul = *num1 * *num2;

	printf("%d\n", mul);
	free(num1);
	free(num2);
	return (0);
}
