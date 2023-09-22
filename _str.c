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

/**
 * intlen - get the size of an integer(the number of digit).
 * @i: the integer.
 * Return: the size of the integer.
 */
unsigned int intlen(int i)
{
	unsigned int j = 1;

	while (i /= 10)
		j++;

	return (j);
}

/**
 * _intToString - transform a int to a string.
 * @i: the integer to convert.
 * @len: a pointer to fill with the len of the string.
 * Return: A pointer tothe string.
 */
char *_intToString(int i, unsigned int *len)
{
	int isNegative = 0;
	unsigned int j;
	char *s = NULL;

	isNegative = i < 0 ? 1 : 0;
	i = i < 0 ? -i : i;
	j = (intlen(i) + 1) + (isNegative ? 1 : 0);
	s = (char *)malloc(sizeof(char) * j);
	*len = j - 1;
	if (s == NULL)
	{
		*len = 0;
		return (NULL);
	}

	j--;
	s[j] = '\0';
	while (j > 0)
	{
		char c = i % 10;

		if (isNegative && j == 1)
			s[j - 1] = '-';
		else
			s[j - 1] = '0' + c;

		i /= 10;
		j--;
	}

	return (s);
}

