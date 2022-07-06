#include "main.h"
#include <ctype.h>

/**
 * _islower - get the lower case value
 *
 * @c - character that checks for lower
 *
 * Return : result is returned in two ways
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
