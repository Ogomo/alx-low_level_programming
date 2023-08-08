#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Function that returns a pointer to a newly allocated
 * space in memory containing a copy of the string
 * @str: input pointer of  string to duplicate
 * Return: Pointer to duplicated string, NULL if str = NULL
 * or if insufficient memory is available
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[j])
		j++;
	a = malloc(sizeof(char) * (j + 1));
	if (a == NULL)
		return (NULL);
	while ((a[i] = str[i]) != '\0')
		i++;
	return (a);
}
