#include "main.h"

/**
*print_alphabet_x10 - Entry point
*description: print lowercase alphabet x10
*Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int i, j, itr = 9, itr2 = 'z';

	for (i = 0; i <= itr; i++)
	{
		for (j = 'a'; j <= itr2; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}
}
