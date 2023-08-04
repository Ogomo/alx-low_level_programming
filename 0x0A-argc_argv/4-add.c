#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that adds positive numbers
 * @argc: argument counts
 * @argv: Array of arguments
 * Return: Always 0 Succes
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0;
	char *c;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i]; i++)
	{
		j = strtol(argv[i], &c, 10);
		if (*c)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += j;
		}
	}
	printf("%d\n", sum);
	return (0);
}
