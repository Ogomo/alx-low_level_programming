#include "main.h"
/**
 * swap_int - swap values of integers
 * @a: - swaps and stores address of b
 * @b: - swaps and stores address of a
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
