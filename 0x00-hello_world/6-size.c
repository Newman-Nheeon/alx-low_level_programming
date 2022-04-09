#include <stdio.h>
/**
  *main - Entry Point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(char));
	printf("size of an int: %d bytes(s)\n", (unsigned long)sizeof(int));
	printf("size of a long int: %d byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(long long int));
	printf("size of a float: %d byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
