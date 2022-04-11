#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabeth;

	for (alphabeth = 'a'; alphabeth <= 'z'; alphabeth++)
	{
		putchar(alphabeth);
	}
	putchar('\n');

	return (0);
}
