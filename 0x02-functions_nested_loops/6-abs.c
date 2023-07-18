#include "main.h"
/**
 * _abs - Function that computes absolute value of an integer
 * @x: The number to be checked
 * Return: Absolute value of a number or 0
 */
int _abs(int x)
{
	if (x < 0)
	{
		int abs_val;

		abs_val = x * -1;
		return (abs_val);
	}
	return (x);
}
