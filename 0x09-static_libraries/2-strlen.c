#include "main.h"
/**
 * _strlen - returns length of a stringi
 * @s: string
 * Return: 0
 */
int _strlen(char *s)
{
	int strlen = 0;

	while (s[strlen])
		strlen++;
	return (strlen);
}
