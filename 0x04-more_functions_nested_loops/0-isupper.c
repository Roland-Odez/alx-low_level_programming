#include "main.h"

/**
 * _isupper - checks for uppercase letter
 * @c: character to check
 */

int _isupper(char c)
{
	int i = 'A';
	
	while(i < 'Z')
	{
		if(i == c){
		       return (1);
		}

		i++;
 	}

	return (0);
}	
