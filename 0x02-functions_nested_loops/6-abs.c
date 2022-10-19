#include "main.h"

/**
*_abs - make number absolute
*@n: number to change
*Return: absolte value
*/

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}

	return(0);
}
