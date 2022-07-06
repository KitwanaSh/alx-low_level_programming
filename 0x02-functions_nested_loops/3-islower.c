#include "main.h"

/**
 *_islower - checks if the character is lowercase
 *@c : character that checks for lower
 *Descritption: does this explain what i mean here
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
