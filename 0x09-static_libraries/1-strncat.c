#include "main.h"
/**
 * _strncat - Function that concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: - parameter
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int d, s;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		if (n > s)
			dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
