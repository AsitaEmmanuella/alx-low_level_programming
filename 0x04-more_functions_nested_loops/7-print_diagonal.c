#include "main.h"

/**
 * print_diagonal - print diagonal linez
 *
 * @n: no of inputs
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0 ; i < n ; i++)
	{
		if (n > 1)
			for (j = 0 ; j < 1 ; j++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
