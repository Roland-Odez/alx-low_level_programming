#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/* betty style doc for function main goes there */

/**
 *main - Entry point
 *description: print if a positve or negative number
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2; 
	
  	if (n < 0)
	{
		printf("%i is negative\n", n);
	}
       	else if (n == 0)
	{
		printf("%i is zero\n", n);
        }
	else 
        {
        	printf("%i is positive\n", n);
	}
	
        return (0);

}