#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return : Always 0 (Success)  
 */
int main()
{
  char i = '0', j = '0';

  for (i = '0'; i < '2'; i++)
    {
      for (j = '0'; j < '2'; j++)
	{
	  if (i != j)
	    {
	      putchar(i);
	      putchar(',');
	      putchar(j);
	    }
	}
    }
  putchar('\n');

  return (0);
}
