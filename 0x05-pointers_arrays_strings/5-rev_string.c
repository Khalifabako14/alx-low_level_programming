#include "khalifa.h"

/**
 * rev_string - Function that reverses a string
 * @s: validate the character
 * Return: 0 (Succesful)
 */

void rev_string(char *s)
{
	int k = o, y = 0, Aux;

	while (s[k] != '\0')
	{
		k++;
	}
	k--;
	while (k > y)
	{
		Aux = s[k];
		s[k--] = s[y];
		s[k++] = Aux;
	}
}
