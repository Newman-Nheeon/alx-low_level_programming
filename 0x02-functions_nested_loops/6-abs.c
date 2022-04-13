#include <stdio.h>
#include "main"
/**
 * _abs - entry point
 * @n: takes an integer
 * Return: 1 & 0
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
