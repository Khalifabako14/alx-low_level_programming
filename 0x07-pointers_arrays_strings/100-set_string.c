#include "bako.h"

/**
 * set_string - Function that sets the value of a pointer to a char
 * @s: pointer to pointer we need to set to
 * @to: string to pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
