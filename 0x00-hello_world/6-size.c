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

printf("Size of char is: %lu byte(s)", sizeof(a));

printf("Size of int is: %lu byte(s)", sizeof(b));

printf("Sizeof long int is : %lu byte(s)", sizeof(d));

printf("Size of float is : %lu byte(s)" sizeof(c));

printf("Size of long long int is : %lu byte(s)", sizeof(e));
return (0);

}
