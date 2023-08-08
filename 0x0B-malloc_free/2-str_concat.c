#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Fuction which concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Pointer to a new string created or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len, len1, len2;
	char *res;

	len1 = len2 = 0;
	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}
	len = len1 + len2;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		res[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		res[i] = s2[j];
	res[len] = '\0';
	return (res);
}
