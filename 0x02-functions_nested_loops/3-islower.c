#include "main.h"

/**
 *_islower - Entry checks if the character is lowercase
 *@c : Representing all the characters
 *Descritption: Recall the use of c
 *
 *Return : Always return @result.
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
