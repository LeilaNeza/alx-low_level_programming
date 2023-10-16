#include "main.h"

/**
 * print_rev - function for reversing
 * @s: parameter
 */

void print_rev(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = count - i; i >= 0; i--)
		putchar(s[i]);
	putchar('\n');
}
