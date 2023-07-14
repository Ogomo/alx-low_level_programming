#include <stdio.h>
/**
 * main - Print  alphabet in lowercase except q and e
 * Return: 0 (Success)
 */

int main(void)
{
	int ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if ((ch != 'q' && ch != 'e') && ch <= 'z')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
