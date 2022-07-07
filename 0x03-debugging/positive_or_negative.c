#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *positive_or_negative - The condition to negative, positive or zero
 *@i: It prints random numbers and check its fact
 *
 *return: Always 0
 */
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
