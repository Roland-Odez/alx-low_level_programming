#include <stdio.h>

/**
 * main - print sum of even fibonacci number up to 4,000,000
 * Return: 0
 */

int main(void)
{
	int sum_even = 0, a, b, sum = 1;

	a = b = 1;

	while (b < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
		{
			sum_even = += sum;
		}
	}
	printf("%d\n", sum_of_evens);

	return (0);
}
