#include <stdio.h>

/**
 * The printing of 10 digit numbers
 * Should print with putchar only to get -SUCCESS
 */
int main(void)
{
  char num = '0'; /*Here i decalre the number in character function!*/
  for (num = '0';  num <= '9'; num++)
    putchar(num);
  putchar('\n');

  return (0);
}
