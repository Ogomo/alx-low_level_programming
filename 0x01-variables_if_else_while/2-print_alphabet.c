#include <stdio.h>

/**
* main - prints alphabet in lower case
* Return: 0 (Success)
*/

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
