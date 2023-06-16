#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: status value 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == 0)
		exit(98);

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
