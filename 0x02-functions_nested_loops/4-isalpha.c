#include "main.h"
#include <stdio.h>
/**
 * _isalpha - entry point
 * @c: takes in a character
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
