#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
