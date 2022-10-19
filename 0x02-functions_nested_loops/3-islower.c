#include "main.h"

/**
*_islower - Entry point
*Return: Always 1 (Success)
*/

int _islower(int c)
{
	int i, itr = 'z';

	for (i = 'a'; i <= itr; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	return (0);
}
