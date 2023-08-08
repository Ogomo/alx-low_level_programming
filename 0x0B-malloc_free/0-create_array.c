#include "main.h"
#include <stdlib.h>
/**
 * create_array - Function that creates an array of chars
 * initialized it with a specific char
 * @size: size of array
 * @c: character
 * Return: pointer to array or null if it fails or if it's 0
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
