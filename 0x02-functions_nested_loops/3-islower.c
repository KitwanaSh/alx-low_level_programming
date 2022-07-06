#include "main.h"
#include <ctype.h>

/**
 * _islower - get the lower case value
 *
 * Return : 1 if it is lower and 0 is diff
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

    return result;
}
