#include "main.h"

/**
 * print_array - print n element of a string
 * @arr: array of element
 * @n: number of item
 */

void print_array(int *arr, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != (n - 1))
			printf("%d, ", arr[i]);
		else
			printf("%d", a[i]);

	}
	printf("\n");
}

