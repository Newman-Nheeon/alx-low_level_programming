#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char upper_case;
	char lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(lower_case);
	}
	for (upper_case = 'a'; upper_case <= 'z'; upper_case++)
	{
		putchar(upper_case);
	}
	putchar('\n');

	return (0);
}
