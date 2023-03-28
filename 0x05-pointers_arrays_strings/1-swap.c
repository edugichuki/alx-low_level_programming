#include "main.h"
/**
 * sawp_int - swaps the values of integers
 *
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
