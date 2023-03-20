#include <stdio.h>

/**
 * main - Function that prints the name of the file of the program
 * was compiled from, followed by a new line.
 * Return: 0 (Succesful)
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
