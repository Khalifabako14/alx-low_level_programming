#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer it is compiled and run on
 * Return: 0 (Successful)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
pirntf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
