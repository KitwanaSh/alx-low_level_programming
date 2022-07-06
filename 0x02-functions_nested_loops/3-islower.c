#include "main.h"

/**
 *_islower - int for here
 *
 *@c : character that checks for lower
 *
 *Return : Always return @result
 */
int _islower(int c) /* The character should run here*/
{
	/**
	 * @result: led to the func of c
	 */
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
