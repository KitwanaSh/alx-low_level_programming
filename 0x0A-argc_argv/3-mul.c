#include <stdlib.h>
#include <stdio.h>

/**
 * main - The main function
 * @argc: The argument count variable
 * @argv: the vector of string variable
 *
 * Return: 1 for error, 0 for success
 */

int main(int argc, char *argv[])
{
	int num = argc;
	int int1, int2, int3;

	if (num != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int1 = atoi(argv[1]);
		int2 = atoi(argv[2]);
		int3 = int1 * int2;

		printf("%d\n", int3);
		return (0);
	}
}
