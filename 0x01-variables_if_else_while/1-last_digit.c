#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a two-digit random number and
 *              prints the last digit of that number along with
 *              whether it's greater than 5, equal to 0, or less
 *              than 6 and not 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));

	n = rand() % 90 + 10;

	lastDigit = n % 10;


	printf("Last digit of %d is %d", n, lastDigit);


	if (lastDigit > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf(" and is 0\n");
	}
	else
	{
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}


