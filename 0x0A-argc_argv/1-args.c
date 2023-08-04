#include <stdio.h>

/**
 * main - prgram that prints number of arguments passed into it
 * @argc: arguments counts
 * @argv: arguments arrays
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
