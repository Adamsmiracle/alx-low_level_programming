#include <stdio.h>
/**
  * main - returns the first argument
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 (Success)
  */

int main(int argc__attribute__((unused)),  char *argv[])
{
	printf("%s\n", *argv[0]);
	return (0);
}
