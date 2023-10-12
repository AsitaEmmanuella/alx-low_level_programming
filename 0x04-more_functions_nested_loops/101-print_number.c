#include "main.h"

/**
 * print_integer - A function to print n
 * @m: an input unsigned integer
 * Return: Nothing
 */
void print_integer(int m)
{
	int i = 1;
	int is_started = 0;

	while (i <= m)
	{
		int digit = (m / i) % 10;
		if (is_started || digit > 0 || i == m)
		{
			_putchar(digit + '0');
			is_started = 1;
		}
		i *= 10;
	}
}

