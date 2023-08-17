#include "main.h"
#include <stdio.h>

/**
  * FILE: 101-natural.c
  * AUTHOR: MIRACLE
  * main - list all the natural below 1024 (excluded) that are multiples of 3 or 5.
  * Return: Always 0.
  */

int main(void)
{
	int i, sum;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (1 % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return(0);

}

