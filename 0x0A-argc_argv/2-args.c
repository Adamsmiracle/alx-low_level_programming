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
	while (argc--)
	{
		printf("%s\n", *argv++);
		return (0);
	}
}
