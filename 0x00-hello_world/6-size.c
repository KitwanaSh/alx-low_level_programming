#include <stdio.h>

/**
 * Add the proram
 *
 * This should print the sizes of what the program compiles
 */
int main(void)
{
  char c;
  int i;
  float f;

  printf("Size of a char: %c byte(s)\n", (char)sizeof(c));
  printf("Size of an int: %i byte(s)\n", (unsigned long)sizeof(i));
  printf("Size of a long int: %li byte(s)\n", (long int)sizeof(i));
  printf("Size of a lon long int: %li byte(s)\n", (unsigned long int)sizeof(i));
  printf("Size of a float: %fl byte(s)\n", (short float)sizeof(f));

  return (0);
}
