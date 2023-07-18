#include "main.h"
/**
 * print_last_digit - Prints last digit of a num
 * @l: The number to be treated
 * Return: value of the last digit
 */
int print_last_digit(int l)
{
	int last;

	last = l % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
