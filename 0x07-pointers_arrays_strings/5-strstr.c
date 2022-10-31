#include "main.h"


/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: 0 on success
 */

char *_strstr(char *haystack, char *needle)
{
	for(; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		cha *p = needle;

		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
