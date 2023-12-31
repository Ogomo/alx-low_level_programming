#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - execute a function pointer on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: ptr to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
