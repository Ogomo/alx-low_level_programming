#include <stdio.h>
#include "main.h"
/**
 * main - print numbers from 1 to 100
 * Description: Prints numbers 1 to 100 with
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; 1 <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
