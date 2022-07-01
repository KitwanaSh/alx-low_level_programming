#include <stdio.h>

/**
 * main - Entry point
 *
 * Return - Always 0 (Success)
 */
int main()
{ 
  int i = 0, j = 0, k = 0;
  
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)	
        {
	  for (k = 0; k < 3; k++)   
            {
	      if (i != j && j != k && k != i)	
                {		  
		  printf("%d, %d, %d\n", i,j,k);
                }
            }
        }
   }

  return (0);
}
