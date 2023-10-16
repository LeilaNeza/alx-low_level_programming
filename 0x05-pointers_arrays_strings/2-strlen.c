#include "main.h"

/**
 * _strlen - function to get the length of string
 * @s: parameter
 * Return: the length of string
 */

int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}
