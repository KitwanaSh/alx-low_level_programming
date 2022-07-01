#include <stdio.h>
#include <ctype.h>

/**
 * The program that print alphabet in reverse
 *  Will reurn the function puchar
 */
int main(void)
{
  char alp = 'z';

  while (alp >= 'a')
    {
      putchar(alp);
      alp--;
    }
  putchar('\n');
  
  return (0);
}
