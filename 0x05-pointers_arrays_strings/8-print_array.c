#include "main.h"
/**
  * print_array - prints the first n elements of array
  * @a: the array of integers
  * @n: number
  */


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
