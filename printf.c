#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: the format.
 * Return: Same as the printf function.
 */
int _printf(const char *format, ...)
{
	va_list arg_list;
	char t;
	int i = 0, n = 0, wn = 0;
	unsigned int l = 0;
	char c = *(format + i);
	char c_data, *s_data = NULL, *i_data = NULL;

	va_start(arg_list, format);
	while (c)
	{
		if (c == '%')
		{
			i++;
			c = *(format + i);
			t = _get_type(c);
			switch (t)
			{
				case 'c':
					c_data = va_arg(arg_list, int);

					wn = write(1, &c_data, 1);
					break;
				case 's':
					s_data = va_arg(arg_list, char*);

					if (s_data == NULL)
						wn = write(1, "(null)", 6);
					else
						wn = write(1, s_data, _strlen(s_data));
					break;
				case '%':
					wn = write(1, "%", 1);
					break;
				case 'i':
				case 'd':
					l = 0;
					i_data = _intToString(va_arg(arg_list, int), &l);

					wn = write(1, i_data, l);
					free(i_data);
					break;
				default:
					wn = write(1, &c, 1);
					break;
			}
			n += wn >= 0 ? wn : 0;
		}
		else
		{
			write(1, &c, 1);
			n++;
		}

		i++;
		c = *(format + i);
	}
	va_end(arg_list);
	return (n);
}
