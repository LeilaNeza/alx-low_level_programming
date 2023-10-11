#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * _putchar - function to print characters
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
