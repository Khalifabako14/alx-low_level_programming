#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that generates random valid
 * Passwords for the program 101-crackme
 * Return: 0 (Successful)
 */

int main(void)
{
	int pass[100];
	int k, sum, b;

	sum = 0;

	srand(time(NULL));

	for (k = 0; k < 100; k++)
	{
		pass[k] = rand() % 78;
		sum += (pass[k] + '0');
		putchar(pass[k] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			b = 2772 - sum - '0';
			sum += b;
			putchar(b + '0');
			break;
		}
	}
	return (0);
}
