#include "main.h"
/**
 * _strcpy - copies string
 * @dest: char typr string
 * @src: char type string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z]	!= '\0');
	return (dest);
}
