#include "main.h"

int actual_sqrl_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: 0 for natural
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrl_recursion(n, 0));
}

/**
 * actual_sqrl_recursion - recursion to find the natural square root
 * @n: int to calculate the sq root
 * @i: interator
 * Return: the result square root
 */
int actual_sqrl_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrl_recursion(n, i + 1));
}
