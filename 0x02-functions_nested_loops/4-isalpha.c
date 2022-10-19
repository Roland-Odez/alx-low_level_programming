#include "main.h"

/**
*_isalpha - checks for uppercase letters
*@c:character to check
*return: 1 for uppercase 0 for lowercase
*/

int _isalpha(int c)
{
	int i , itr = 'Z';

	for (i = 'A'; i <= itr; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	return (0);
}

