#include <stdlib.h>
#include <stdio.h>

/**
 * main - The main function
 * @argc: The number of arguments in this function
 * @argv: The vector of string arguments
 *
 * Return: The cents.
 */
int main(int argc, char *argv[])
{
	int cents, cnt = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents = cents - 25;
		else if (cents >= 10)
			cents = cents - 10;
		else if (cents >= 5)
			cents = cents - 5;
		else if (cents >= 2)
			cents = cents - 2;
		else if (cents >= 1)
			cents = cents - 1;
		cnt++;
	}
	printf("%d\n", cnt);
	return (0);
}
