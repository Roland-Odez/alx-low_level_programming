#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string to be append to
 * @src: string to append
 * Return: concatenate string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[j] != '0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}

