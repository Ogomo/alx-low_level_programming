#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	int n;

	printf("%ld, %ld, ", a, b);
	for (n = 2; n < 50; n++)
	{
		unsigned long int c = a + b;

		printf("%ld", c);
		if (n != 49)
		{
			printf(",");
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
