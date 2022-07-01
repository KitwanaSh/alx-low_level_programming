#include <stdio.h>
#include <ctype.h>

/**
 * The program that print hexadecimal numbers
 * Will return success if ...
 */
int main(void)
{
  char nm = '0';

  for (nm = '0'; nm  < 'x'; nm++)
    {
      putchar(nm);
    }
  putchar('\n');

  return (0);
}
