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
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		p = malloc(sizeof(char) * (n + len1 + 1));
	else
		p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!p)
		return (NULL);



	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
	{
		p[i++] = s2[j++];
	}

	while (n >= len2 && 1 < (len1 + len2))
		p[i++] = s2[j++];
	p[i] = '\0';

	return (p);
}
