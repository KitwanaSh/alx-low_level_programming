#include "main.h"

/**
 * _islower - int for @c here 
 *
 * @c : character that checks for lower
 *
 * Return : Always return 0.
 */
int _islower(int c)
{
	int result;

	if (c >= 97 && c <= 122)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
