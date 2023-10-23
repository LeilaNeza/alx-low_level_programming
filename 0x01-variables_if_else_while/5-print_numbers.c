#include <stdio.h>


/**
 * main - program that prints single digit numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf(number);
	}

	putchar('\n');

	return (0);
}
