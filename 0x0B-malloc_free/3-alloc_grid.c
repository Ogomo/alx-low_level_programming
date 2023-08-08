#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: A pointer to two dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;
	int area = width * height;

	if (area <= 0)
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}
