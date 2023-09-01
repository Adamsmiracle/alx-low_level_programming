#include "main.h"
#include <stdio.h>
/**
  * main - prints the number of arguments passed
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 (Success)
  */

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
