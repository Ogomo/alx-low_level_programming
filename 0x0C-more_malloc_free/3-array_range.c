#include <stdlib.h>
#include "main.h"
/**
 * array_range - Function that creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values and number of elements
 * Return: Apointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;
	return (ptr);
}
