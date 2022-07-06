#include "main.h"

/**
 *_islower - Entry checks if the character is lowercase
 *@c : Representing all the characters
 *Descritption: Recall the use of c and how the function _islower relates to it.
 *
 *Return : Always return @result.
 */
int _islower(int c) /* The character should run here*/
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
