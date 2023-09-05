#include "main.h"
/**
 * argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, n, I = 0, r = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			I++;
	}
		I += ac;

		str = malloc(sizeof(char) * I + 1);
		if (str == NULL)
			return (NULL);
		for (i = 0; i < ac; i++)
		{
			for (n = 0; av[i][n]; n++)
			{
				str[r] = av[i][n];
				r++;
			}
			if (str[r] == '\0')
				str[r++] = '\n';

		}
		return (str);
}
