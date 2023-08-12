#include <stdio.h>

/**
 * main-Prints the size of the various data types
 *Return: 0 (success)
 */

int main(void)
{
char a;
int b;
float c;
long int d;
long long int e;

printf("Size of char is: %lu byte(s)\n", (unsigned long)sizeof(a));

printf("Size of an int is: %lu byte(s)\n", (unsigned long)sizeof(b));

printf("Size of long int is : %lu byte(s)\n", (unsigned long)sizeof(d));

printf("Size of long long int is : %lu byte(s)\n", (unsigned long)sizeof(e));

printf("Size of float is : %lu byte(s)\n", (unsigned long)sizeof(e));

return (0);

}
