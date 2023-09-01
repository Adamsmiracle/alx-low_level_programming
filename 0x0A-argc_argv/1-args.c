#include <stdio.h>
#include "main.h"
/**
  * main - prints the number of arguments passed
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 (Success)
  */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
