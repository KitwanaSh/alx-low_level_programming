#include <stdio.h>
#include <ctype.h>

/**
 * Print the alphabets from a to z
 *
 * Then print in lowercase and upper case
 */
int main() /* Thi is it*/
{
  char c = 'a';
  char d = toupper(c);
  
  while (c <= 'z')
    {
      putchar(c);
      c++;
      putchar(d);
      d++;
    }
  putchar('\n');

  return (0);
}
