#include <stdio.h>

/**
* main - causes an infinite loop
* Return: Always 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
	/** This is the part of the code that causes infinite loops*/
	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
