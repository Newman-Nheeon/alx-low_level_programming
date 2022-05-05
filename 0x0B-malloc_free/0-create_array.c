#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size: size of the memory to print
 * @c: character to print
 *
 * Return: a pointer of array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	i = 0;

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		array = malloc(sizeof(char) * size);
			if (array == '\0')
			{
				return ('\0');
			}
			else
			{
				while (i < size)
				{
					array[i] = c;
					i++;
				}
			}
		return (array);
	}
}
