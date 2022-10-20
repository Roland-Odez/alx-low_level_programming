#include <stdio.h>

/**
 * main - print first 98 fibonacci numbers with out long long , malloc
 * Return: 0
 */

int main(void)
{
	int counter, overflow;
	unsigned long a =1, b = 1, sum = 0;
	long a_hd, a_tl, b_hd, b_tl, sum_hd, sum_tl;

	printf("1");
	
	for (counter = 2; counter < 98; counter++)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf(", %lu", sum);
	}

	a_hd = a / 1000000000;
	a_tl = a % 1000000000;
	b_hd = b / 1000000000;
	b_tl = b % 1000000000;

	for (; counter < 99; counter++)
	{
		overflow = (a_tl + b_tl) / 1000000000;
		sum_tl = (a_tl + b_tl) - (1000000000 * overflow);
		sum_hd = (a_hd + b_hd) + overflow;

		printf(", %lu%lu", sum_hd, sum_tl);

		a_hd = b_hd;
		a_tl = b_tl;
		b_hd = sum_hd;
		b_tl = sum_tl;
	}

	printf("\n")

	return (0);
}
