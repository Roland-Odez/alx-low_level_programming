#include "main.h"

/**
*_isalpha - checks for alphabetic character
*@c: character to check
*Return: 1 for alphabet 0 for not lowercase
*/

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

