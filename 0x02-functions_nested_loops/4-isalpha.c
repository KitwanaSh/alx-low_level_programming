#include "main.h"

/**
 * _isalpha - show 1 if the is in lower case and 0 is other
 * @c : the singe charater to be in ASCII code
 *
 * Return: 1 if c is a letter, lowercase or uppercase and 0 for other
 */
int _isalpha(int c)
{
	if((c >= 65 || c >= 97) && (c <= 90 || c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
