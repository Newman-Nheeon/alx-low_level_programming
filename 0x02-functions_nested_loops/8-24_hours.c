#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - entry point
 * @void - no argument
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = o; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}

