#include "main.h"

/**
 * swap_int - function to perform swapping
 * @a: first parameter
 * @b: second parameter
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
