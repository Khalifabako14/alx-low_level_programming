#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the last digit of a random generated numb
 * and whether it is greater than 5, less than 6, or 0.
 * Return: 0 (Successful)
 */
int main(void)
{
int n;

srand(time(0));

n = rand() - RAND_MAX / 2;

num = n % 10;

if (num  > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, num);
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, num);
}
return (0);
}
