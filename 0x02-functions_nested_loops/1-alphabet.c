#include "main.h"

/**
 * print_alphabet - prints the letters of the alphabet
 * Return: always 0
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
