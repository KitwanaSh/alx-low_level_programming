#include <stdio.h>

/**
 * Print the alphabets from a to z
 */
int main()
{
  char c = 'a';

  while (c <= 'z')
    {
      putchar(c);
      c++;
    }
  putchar('\n');

  return (0);
}
