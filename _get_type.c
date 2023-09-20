#include "main.h"

/**
 * _get_type - get the type of the represented by the character c.
 * @c: the character to check.
 * Return: a character which represent the type of the data to print.
 * c: for char;
 * s: for char *;
 * %: for % character;
 * d: for int;
 * i: for octal if int begin whith 0 (i.e. 047)
 */
char _get_type(char c)
{
	switch (c)
	{
		case 'c':
			return ('c');

		case 's':
			return ('s');

		case '%':
			return ('%');

		case 'd':
			return ('d');

		case 'i':
			return ('i');

		default:
			return ('!');
	}
}
