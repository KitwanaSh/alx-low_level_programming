#include "main.h"
#include <ctype.h>

/**
 * int _islower - is to get the lower case value
 *
 * @c : character that checks for lower
 * @result : return the res of letters 
 *
 * Return : result is returned in two ways
 * Description : describe the longer code
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
