#include <stdio.h>
/**
 * main - Program that prints the size of various types on the computer it is compiled and run on
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	int d;
	long int i;
	long long int l;
	float f;
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
