#include "main.h"

/**
*print_alphabet - Entry point
*description: print lowercase alphabet
*Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char alpa = 'a';

	while (alpa <= 'z')
	{
		_putchar(alpa++);
	}
	_putchar('\n');
}
