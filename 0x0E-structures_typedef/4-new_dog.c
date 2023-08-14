#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - Functin to return the length of a string
 * @s: string to evaluate
 * Return: the length of  string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * _strcopy - copies string pointed to by src, including
 * the terminating NULL byte, to a buffer pointed to by dest
 * @dest: Buffer storing the string copy
 * @src: source string
 * Return: Pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int b, c;

	b = 0;

	while (src[b] != '\0')
	{
		b++;
	}
	for (c = 0; c < b; c++)
	{
		dest[c] = src[c];
	}
	dest[c] = '\0';
	return (dest);
}

/**
 * new_dog - Function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Pointer to the new dog Success, NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int m, n;

	m = _strlen(name);
	n = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (m + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (n + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcopy(dog->name, name);
	_strcopy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
