#include "main.h"

/**
 *_islower - Shows 1 if the character is in
 *lowercase and 0 if the other
 *@c : Representing all the characters in ASCII code
 *
 *Return : 1 for lowecrcase and 0 for other
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
