#include "bako.h"

/**
 * set_string - Function that sets the value of a pointer to a char
 * @s: The pointer
 * @to: The char.
 */

void set_string(char **s, char *to)
{
	**s = to;
}
