#include "main.h"
/**
  * alloc_grid - nested loop to make grid
  * @width: input integer
  * @height: input integer
  */

int **alloc_grid(int width, int height)
{
	int i;
	int y;
	int **p;

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int *) * width);

		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
				free(p[i]);

			free(p);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (y = 0; y < width; y++)
		{
			p[i][y] = 0;
		}
	}
	return (p);
}
