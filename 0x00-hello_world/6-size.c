#include <stdio.h>
/**
* main - Prints out a string to stdout.
* Return: 0 if success.
*/
int main(void)
{
char c;
int i;
long l;
long long ll;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}