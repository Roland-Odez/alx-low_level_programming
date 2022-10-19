#include "main.h"

/**
*_islower - checks for lower case
* @c: character to check 
*Return: 1 for lower case 0 for upper case
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
