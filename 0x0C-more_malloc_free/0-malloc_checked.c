#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: memory
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == 0)
		exit(98);
	return (mem);
}
