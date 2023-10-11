#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @c: the number to combuted
 * Return: Absolute value of the number or zero
 */

int _abc(int c)
{
	if (c  < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
