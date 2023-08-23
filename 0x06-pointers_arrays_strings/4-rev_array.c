#include "main.h"
/**
  * reverse_array - reverses the arrray given
  * @a: input
  * @n: input
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int j;
	int i;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
