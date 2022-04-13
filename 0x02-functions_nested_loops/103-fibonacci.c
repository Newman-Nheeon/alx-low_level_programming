 #include <stdio.h>
/**
 * main - entry
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long count, i, j, k, sums;

	i = sums = 0;
	j = 1;


	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;

		if (k % 2 == 0 && k < 4000000)
		{
			sums += k;
		}
	}
	printf("%lu\n", tot_sum);
	return (0);
}

