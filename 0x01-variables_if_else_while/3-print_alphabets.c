#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char upper_case lower_case;

	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
	{
		putchar(alphabeth);
	}
	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(lower_case);
	}
	putchar('\n');

	return (0);
}
