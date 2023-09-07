#include "main.h"
/**
  * string_nconcat - concatenated s1 and n bytes of s2;
  * @s1: first input string
  * @s2: Second input string
  * @n: number of byte of s2 to concatenate to s1
  * Return: pointer to the newly created array
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1;
	unsigned int i;
	unsigned int j;

	i = 0;
	len1 = 0;
	j = 0;

	while (s1++)
		len1++;

	p = malloc(n + len1);

	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}


	while (j < n)
	{
		p[i] = s2[j];
		j++;
		i++;
	}

	return (p);
}
