#include "main.h"

/**
 * _strlen - get the size of a string.
 * @s: the string.
 * Return: the length of the string.
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i])
		i++;

	return (i);
}
