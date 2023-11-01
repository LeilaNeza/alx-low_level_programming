#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * _puts - outputs a character at a time
 * @str: string  variable
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
