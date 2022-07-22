#include <stdlib.h>
#include <stdio.h>

/**
 * main - Te main function
 * @argc: The count variable argument
 * @argv: The vector character variable
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
