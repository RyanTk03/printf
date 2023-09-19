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
	int i = 0;
	char c = *(format + i);

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
					char c_data = va_arg(arg_list, char);

					write(1, &c_data, 1);
					break;
				case 's':
					char *s_data = va_arg(arg_list, char *)

					write(1, s_data, _strlen(s_data));
					break;
				case '%':
					write(1, "%", 1);
					break;
				default:
					break;
			}
			continue;
		}

		write(1, &c, 1);
		i++;
		c = *(format + i);
	}
}
