#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints the min number of
 * coins to make change for an amount of money
 * @argc: argument count
 * @argv: Array arguments
 * Return: 0 Success, 1 Error
 */
int main(int argc, char **argv)
{
	int x, j;
	unsigned int i;
	char *c;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = strtol(argv[1], &c, 10);
	j = 0;
	if (!*c)
	{
		while (x > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (x >= cents[i])
				{
					j += x / cents[i];
					x = x % cents[i];
				}
			}
		}
		if (x == 1)
			j++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", j);
	return (0);
}
