#include <stdio.h>

/**
* main - causes an infinite loop
* Return: Always 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
	/** This is the partof the code causing infinite loops */
	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
