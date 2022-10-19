#include "main.h"

/**
*print_alphabet+x10 - Entry point
*description: print lowercase alphabet x10
*Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	for (int i = 0, count = 9; i <= count; i++)
	{
		for (int j = 'a', count = 'z'; j <= count; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}
}
