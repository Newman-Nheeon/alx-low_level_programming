#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: string between the strings
 * @n: number of parameters received
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list strings;

	va_start(strings, n);

	for (i = 0 ; i < n ; i++)
	{
		str =  va_arg(strings, char *);

		if (str == NULL)
		{
			printf("%p", str);
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(strings);
	printf("\n");
}
