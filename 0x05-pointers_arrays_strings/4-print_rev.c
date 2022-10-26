#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	/* iterate to find length of string */
	while (*s != '\0')
	{
		len++;
		++s;
	}

	/* go back to char before null */
	s--;

	/* print string in reversed */

	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
