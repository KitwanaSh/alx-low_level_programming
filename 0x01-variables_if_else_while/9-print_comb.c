#include <stdio.h>
#include <ctype.h>

/**
 * the all possible digit
 * This returns  values separeted with comas
 */
int main(void)
{
  char dg = '0';

  for (dg ='0'; dg <= '9'; dg++)
    {
      putchar(dg);
      putchar(',');
    }
  putchar('\n');

  return (0);
}
