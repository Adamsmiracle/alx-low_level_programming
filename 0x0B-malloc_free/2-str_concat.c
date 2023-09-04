#include "main.h"
/**
  * str_concat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * Return: pointer to the concatenated string
  */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1;
	unsigned int len2;
	unsigned int i;
	unsigned int m;
	char *p;

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (p == 0 || p == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}

	m = 0;
	while (s2[m] != '\0')
	{
		p[i] = s2[m];
		m++;
		i++;
	}

	return (p);

}
