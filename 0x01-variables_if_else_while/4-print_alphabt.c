#include <stdio.h>
#include <ctype.h>

/**
 * Print the alphabets from a to z
 */
int main()
{
  char c = 'a';
  
  for (c != 'q'; c <= 'z'; c++)
    {      
      putchar(c);
    }
  putchar('\n');

  return (0);
}
